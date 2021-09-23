/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:12:56 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/15 16:23:50 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	res;

	count = 1;
	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (count < power)
	{
		res = res * nb;
		count++;
	}
	return (res);
}
