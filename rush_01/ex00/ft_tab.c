/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 10:42:53 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/19 15:48:26 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

t_tab	*ft_tab_create(int size)
{
	t_tab	*tab;

	tab = malloc(sizeof(t_tab));
	if (!tab)
	{
		write(1, "\nft_tab_create : tab struct can not be created.\n", 48);
		return (NULL);
	}
	tab->size = size;
	tab->grid = malloc(size * size * sizeof(int));
	if (!tab->grid)
	{
		write(1, "\nft_tab_create : grid can not be created.\n", 42);
		return (NULL);
	}
	return (tab);
}

void	ft_tab_free(t_tab *tab)
{
	free(tab->grid);
	free(tab);
}

void	ft_tab_init(t_tab *tab)
{
	int	x;
	int	y;

	y = 0;
	while (y < tab->size)
	{
		x = 0;
		while (x < tab->size)
		{
			ft_tab_set(tab, x, y, 0);
			x++;
		}
		y++;
	}	
}

int	ft_tab_get(t_tab *tab, int x, int y)
{
	return (tab->grid[x + y * tab->size]);
}

void	ft_tab_set(t_tab *tab, int x, int y, int value)
{
	tab->grid[x + y * tab->size] = value;
}
