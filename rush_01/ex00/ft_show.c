/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 09:14:05 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/19 15:33:51 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_show_tab(t_tab *tab)
{
	int	x;
	int	y;

	y = 0;
	while (y < tab->size)
	{
		x = 0;
		while (x < tab->size)
		{
			ft_putnbr(ft_tab_get(tab, x, y));
			if (x != tab->size - 1)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}	
}
