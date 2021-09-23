/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:32:46 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/13 12:23:52 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	c_croiss;
	int	c_decroi;
	int	temp;

	c_croiss = 0;
	c_decroi = size;
	while (c_croiss < size / 2)
	{
		temp = *tab;
		*tab = *(tab + c_decroi - c_croiss - 1);
		*(tab + c_decroi - c_croiss - 1) = temp;
		c_croiss++;
		c_decroi--;
		tab++;
	}
}
