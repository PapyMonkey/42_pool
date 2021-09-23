/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:57:20 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/19 21:45:18 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_errors_input(char *input, int n_argc)
{
	int	i;

	i = 0;
	if (n_argc != 2)
		return (1);
	while (input[i] != '\0')
	{
		if (!(('0' <= input[i] && input[i] <= '9') || input[i] == ' '))
			return (1);
		i++;
	}
	return (0);
}

int	ft_errors_numbers(int *params, t_tab *tab)
{
	int	i;

	i = 0;
	if (ft_nbrarrlen(params) != 4 * tab->size)
		return (1);
	while (params[i])
	{
		if (params[i] > tab->size || params[i] <= 0)
			return (1);
		i++;
	}
	return (0);
}

int	ft_final_check(t_tab *tab, int *params)
{
	int	x;
	int	y;

	y = 0;
	if (tab->size == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	while (y < tab->size)
	{
		x = 0;
		while (x < tab->size)
		{
			if (!ft_is_value_valid(tab, x, y, params))
			{
				write(1, "Error\n", 6);
				return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}
