/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:26:45 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/27 15:27:08 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_atoi(char *str)
{
	int	i;
	int	n_minus;
	int	n_final;

	i = 0;
	n_minus = 0;
	n_final = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (*(str + i) == '+' || *(str + i) == '-')
	{
		if (*(str + i) == '-')
			n_minus++;
		i++;
	}
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		n_final = n_final * 10 + (*(str + i) - 48);
		i++;
	}
	if (n_minus % 2)
		n_final *= -1;
	return (n_final);
}
