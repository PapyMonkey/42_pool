/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_height.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:07:24 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/19 18:51:17 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_height_value(t_tab *tab, int direction)
{
	if (direction > 0)
		return (0);
	else
		return (tab->size - 1);
}

int	ft_height_maxvalue(t_tab *tab, int direction)
{
	if (direction > 0)
		return (tab->size);
	else
		return (-1);
}

int	ft_height_col(t_tab *tab, int x, int direction)
{
	int	y;
	int	y_max;
	int	max_value;
	int	height;

	y = ft_height_value(tab, direction);
	y_max = ft_height_maxvalue(tab, direction);
	max_value = 0;
	height = 0;
	while (y != y_max)
	{
		if (!ft_tab_get(tab, x, y))
			return (0);
		if (ft_tab_get(tab, x, y) > max_value)
		{
			max_value = ft_tab_get(tab, x, y);
			height++;
		}
		y += direction;
	}
	return (height);
}

int	ft_height_row(t_tab *tab, int y, int direction)
{
	int	x;
	int	x_max;
	int	max_value;
	int	height;

	x = ft_height_value(tab, direction);
	x_max = ft_height_maxvalue(tab, direction);
	max_value = 0;
	height = 0;
	while (x != x_max)
	{
		if (!ft_tab_get(tab, x, y))
			return (0);
		if (ft_tab_get(tab, x, y) > max_value)
		{
			max_value = ft_tab_get(tab, x, y);
			height++;
		}
		x += direction;
	}
	return (height);
}
