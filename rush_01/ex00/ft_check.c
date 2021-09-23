/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:44:38 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/19 21:13:41 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_is_value_valid(t_tab *tab, int x, int y, int *params)
{
	int	s;

	s = tab->size;
	if (ft_is_duplicate(tab, x, y)
		|| ft_height_col(tab, x, 1) > params[x]
		|| (y == s - 1 && ft_height_col(tab, x, -1) != params[x + s])
		|| ft_height_row(tab, y, 1) > params[y + 2 * s]
		|| (x == s - 1 && ft_height_row(tab, y, -1) != params[y + 3 * s]))
		return (0);
	return (1);
}

int	ft_is_duplicate(t_tab *tab, int x, int y)
{
	int	i;

	if (ft_tab_get(tab, x, y) == 0)
		return (0);
	i = x;
	while (i--)
		if (ft_tab_get(tab, x, y)
			== ft_tab_get(tab, i, y))
			return (1);
	i = x;
	while (++i < tab->size)
		if (ft_tab_get(tab, x, y)
			== ft_tab_get(tab, i, y))
			return (1);
	i = y;
	while (i--)
		if (ft_tab_get(tab, x, y)
			== ft_tab_get(tab, x, i))
			return (1);
	i = y;
	while (++i < tab->size)
		if (ft_tab_get(tab, x, y)
			== ft_tab_get(tab, x, i))
			return (1);
	return (0);
}

int	ft_is_zerox(t_tab *tab, int x, int y)
{
	int	i;

	i = 0;
	while (i < tab->size)
	{
		if (ft_tab_get(tab, i, y) == 0 && i != x)
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_zeroy(t_tab *tab, int x, int y)
{
	int	i;

	i = 0;
	while (i < tab->size)
	{
		if (ft_tab_get(tab, x, i) == 0 && i != y)
			return (1);
		i++;
	}
	return (0);
}
