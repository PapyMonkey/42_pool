/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:58:01 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/27 16:50:55 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <unistd.h>

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_atoi.c

int		ft_atoi(char *str);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_put.c

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_ope.c

int		ft_ope(int a, int b, char *ope);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_str_manip.c

int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, int n);
char	*ft_strcat(char *dest, char *src);

#endif
