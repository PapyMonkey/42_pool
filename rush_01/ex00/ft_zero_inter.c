/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_inter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:07:50 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/19 21:13:22 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_zero_inter_count(t_tab *tab, int x, int y)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (++i < tab->size)
		if (ft_tab_get(tab, x, i) != 0)
			count++;
	i = -1;
	while (++i < tab->size)
		if (ft_tab_get(tab, i, y) != 0)
			count++;
	return (count);
}

int	ft_zero_inter(t_tab *tab, int x, int y)
{
	int	i;
	int	sum;

	i = -1;
	sum = 0;
	while (++i < tab->size)
		if (ft_tab_get(tab, x, i) != 0)
			sum += ft_tab_get(tab, x, i);
	i = -1;
	while (++i < tab->size)
		if (ft_tab_get(tab, i, y) != 0)
			sum += ft_tab_get(tab, i, y);
	if (ft_zero_inter_count(tab, x, y) == tab->size - 1)
		return (sum);
	return (0);
}
