/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 20:26:07 by jibot             #+#    #+#             */
/*   Updated: 2021/09/20 14:30:35 by jibot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	nb;

	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	else
		nb = (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	return (nb);
}
