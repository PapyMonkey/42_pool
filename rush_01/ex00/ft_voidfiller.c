/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_voidfiller.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:40:15 by jibot             #+#    #+#             */
/*   Updated: 2021/09/19 21:15:51 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_voidfiller(t_tab *tab, int x, int y)
{
	int	i;
	int	count;
	int	sze;

	i = 0;
	sze = tab->size;
	count = 0;
	if (ft_is_zerox(tab, x, y) == 0 && ft_tab_get(tab, x, y) == 0)
	{
		while (i < sze)
		{
			count = count + ft_tab_get(tab, i, y);
			i++;
		}
		ft_tab_set(tab, x, y, (sze * (sze + 1) / 2 - count));
	}
	if (ft_is_zeroy(tab, x, y) == 0 && ft_tab_get(tab, x, y) == 0)
	{
		while (i < sze)
		{
			count = count + ft_tab_get(tab, x, i);
			i++;
		}
		ft_tab_set(tab, x, y, (sze * (sze + 1) / 2 - count));
	}
}

void	ft_void_exec(t_tab *tab)
{
	int	x;
	int	y;

	y = 0;
	while (y < tab->size)
	{
		x = 0;
		while (x < tab->size)
		{
			ft_voidfiller(tab, x, y);
			ft_zero_inter(tab, x, y);
			x++;
		}
		y++;
	}
}
