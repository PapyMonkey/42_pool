/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smallgrid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:51:57 by jibot             #+#    #+#             */
/*   Updated: 2021/09/19 15:23:33 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_smallgrid_1(t_tab *tab, int coin, int *valeurs)
{
	if (coin == 1)
	{
		tab->grid[0] = valeurs[0];
		tab->grid[1] = valeurs[1];
		tab->grid[4] = valeurs[2];
		tab->grid[5] = valeurs[3];
	}
	else if (coin == 2)
	{
		tab->grid[2] = valeurs[0];
		tab->grid[3] = valeurs[1];
		tab->grid[6] = valeurs[2];
		tab->grid[7] = valeurs[3];
	}
	else
		printf("%s\n", "Error, must have 1 <= coin <= 4");
}

void	ft_smallgrid_2(t_tab *tab, int coin, int *valeurs)
{
	if (coin == 3)
	{
		tab->grid[8] = valeurs[0];
		tab->grid[9] = valeurs[1];
		tab->grid[12] = valeurs[2];
		tab->grid[13] = valeurs[3];
	}
	else if (coin == 4)
	{
		tab->grid[10] = valeurs[0];
		tab->grid[11] = valeurs[1];
		tab->grid[14] = valeurs[2];
		tab->grid[15] = valeurs[3];
	}
	else
		printf("%s\n", "Error, must have 1 <= coin <= 4");
}
