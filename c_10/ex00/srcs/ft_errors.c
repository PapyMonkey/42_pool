/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:47:45 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/23 14:13:39 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	ft_is_argc_ok(int argc)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	return (1);
}

int	ft_is_file_ok(int file_value)
{
	if (file_value == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	return (1);
}
