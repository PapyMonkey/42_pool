/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:58:11 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/19 22:41:54 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_exec_all(t_tab *tab, int *params)
{
	ft_tab_init(tab);
	ft_autocomplete(tab, params);
	ft_void_exec(tab);
	tab[0] = ft_solve(tab[0], 0, 1, params);
}

t_tab	ft_solve_2(t_tab *tab, int *i, int *val, int **params)
{
	tab->grid[*i] = *val;
	if (!ft_is_value_valid(tab, *i % tab->size, *i / tab->size, *params))
	{
		tab->grid[*i] = 0;
		return (ft_solve(*tab, *i, *val + 1, *params));
	}
	else
	{
		*tab = ft_solve(*tab, *i + 1, 1, *params);
		if (tab->size == 0)
		{
			tab->size = tab->size_backup;
			tab->grid[*i] = 0;
			return (ft_solve(*tab, *i, *val + 1, *params));
		}
		return (*tab);
	}
}

t_tab	ft_solve(t_tab tab, int i, int val, int *params)
{
	if (i == tab.size * tab.size)
		return (tab);
	if (tab.grid[i] != 0)
		return (ft_solve(tab, i + 1, 1, params));
	if (val == tab.size + 1)
	{
		tab.size = 0;
		return (tab);
	}
	if (tab.grid[i] == 0)
		return (ft_solve_2(&tab, &i, &val, &params));
	return (ft_solve(tab, i, val + 1, params));
}
