/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:32:46 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/11 14:39:10 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	cursor;
	int	minimum;
	int	tmp;

	cursor = 0;
	while (cursor < size)
	{
		n = cursor;
		minimum = tab[cursor];
		while (n < size)
		{
			if (tab[n] <= minimum)
			{
				minimum = tab[n];
				tmp = tab[cursor];
				tab[cursor] = tab[n];
				tab[n] = tmp;
			}
			n++;
		}
		cursor++;
	}
}
