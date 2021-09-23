/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_autocomplete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:48:52 by jibot             #+#    #+#             */
/*   Updated: 2021/09/19 16:20:03 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_autocomplete_case_1(t_tab *tab, int i)
{
	int	n;
	int	valeur;

	n = 0;
	valeur = 1;
	if (i < tab->size)
		while (n < tab->size)
			tab->grid[i + (n++) * tab->size] = valeur++;
	n = 0;
	valeur = 1;
	if (tab->size <= i && i < 2 * tab->size)
		while (n < tab->size)
			tab->grid[i + (tab->size - n++ - 2) * tab->size] = valeur++;
	n = 0;
	valeur = 1;
	if (2 * tab->size <= i && i < 3 * tab->size)
		while (n < tab->size)
			tab->grid[(i % tab->size) * tab->size + n++] = valeur++;
	n = tab->size - 1;
	valeur = 1;
	if (3 * tab->size <= i)
		while (n != -1)
			ft_tab_set(tab, n--, i - 3 * tab->size, valeur++);
}

void	ft_autocomplete_case_n(t_tab *tab, int i)
{
	if (i < tab->size)
		tab->grid[i] = tab->size;
	else if (tab->size <= i && i < 2 * tab->size)
		tab->grid[i + (tab->size - 2) * tab->size] = tab->size;
	else if (2 * tab->size <= i && i < 3 * tab->size)
		tab->grid[(i % tab->size) * tab->size] = tab->size;
	else if (3 * tab->size <= i)
		tab->grid[(i % tab->size + 1) * tab->size - 1] = tab->size;
}

void	ft_autocomplete(t_tab *tab, int *sets)
{
	int	i;

	i = 0;
	while (sets[i])
	{
		if (sets[i] == tab->size)
			ft_autocomplete_case_1(tab, i);
		if (sets[i] == 1)
			ft_autocomplete_case_n(tab, i);
		i++;
	}
}
