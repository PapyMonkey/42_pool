/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:56:54 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/30 19:02:34 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	main(int argc, char **argv)
{	
	if (argc != 4)
		return (1);
	if (ft_strcmp(argv[3], "0") == 0 && ft_strcmp(argv[2], "/") == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (1);
	}
	if (ft_strcmp(argv[3], "0") == 0 && ft_strcmp(argv[2], "%") == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
	ft_putnbr(ft_ope(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2]));
	return (0);
}
