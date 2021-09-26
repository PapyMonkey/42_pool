/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:04:05 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/26 23:32:27 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_error_arg(const int argc, char **argv)
{
	char	*nbr_int;
	int		i;

	i = 0;
	if (argc <= 1 || argc >= 4)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (argc == 2)
		nbr_int = argv[1];
	else
		nbr_int = argv[2];
	if (*(nbr_int + i) == '+' || *(nbr_int + i) == '-')
		i++;
	while (*(nbr_int + i))
	{
		if (*(nbr_int + i) < '0' || *(nbr_int + i) > '9')
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}
