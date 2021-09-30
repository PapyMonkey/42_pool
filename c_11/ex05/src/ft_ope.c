/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ope.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:28:09 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/27 16:40:14 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_ope(int a, int b, char *ope)
{
	if (!ft_strcmp(ope, "+"))
		return (a + b);
	else if (!ft_strcmp(ope, "-"))
		return (a - b);
	else if (!ft_strcmp(ope, "/"))
		return (a / b);
	else if (!ft_strcmp(ope, "*"))
		return (a * b);
	else if (!ft_strcmp(ope, "%"))
		return (a % b);
	return (0);
}
