/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:12:33 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/23 15:27:44 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include <unistd.h>
# include <fcntl.h>

// ****************************************************************************
// DEFINE

# define BUF_SIZE 1

// ****************************************************************************
// FUNCTIONS - ft_errors.c

int		ft_is_argc_ok(int argc);
int		ft_is_file_ok(int file_value);

// ****************************************************************************
// FUNCTIONS - ft_put.c

void	ft_putchar(const char c);
void	ft_putstr(const char *str);
void	ft_putnbr(int nb);
void	ft_putarrayint(const int *arr);

#endif
