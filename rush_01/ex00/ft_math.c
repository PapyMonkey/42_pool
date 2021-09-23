/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:08:12 by tmongell          #+#    #+#             */
/*   Updated: 2021/09/18 17:17:53 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

//function that return the factorial of a int
//the function do not handle negative number, and will return -1 if you try.
//also, avoid big nb, it quickly grow out of an int size.
int	ft_factorial(int nb)
{
	if (nb < 0)
	{
		write(1, "ft_factorial ERROR : negative number forbidden,", 47);
		write(1, " exiting with error code -1\n", 28);
		return (-1);
	}
	if (nb == 0)
		nb = 1;
	else
		nb *= ft_factorial(nb - 1);
	return (nb);
}
