/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:32:11 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/15 13:41:10 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	n;

	fact = 1;
	n = 1;
	if (nb < 0)
		return (0);
	while (n <= nb)
	{
		fact = fact * n;
		n++;
	}
	return (fact);
}
