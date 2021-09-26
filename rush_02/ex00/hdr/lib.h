/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:03:08 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/26 23:29:40 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUF_SIZE 32

// ----------------------------------------------------------------------------
// STRUCTURES

typedef struct s_dico
{
	char	*nbr;
	char	*letters;
}	t_dico;

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_convert.c

int		ft_atoi(char *str);
char	*ft_itoa(int nbr);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_digitreader.c

char	*ft_fill_zero(char *str, int len);
int		ft_digitreader_solo(char *str, t_dico *dico, const int n);
int		ft_digitreader_double(char *str, t_dico *dico, const int n);
int		ft_digitreader_excep(char *str, t_dico *dico, const int n);
int		ft_digitreader(char *str_input, t_dico *dico, const int n);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_errors.c

int		ft_error_arg(const int argc, char **argv);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_groups.c

int		ft_set_cursor(t_dico *dico);
void	ft_three_leap_putstr(t_dico *dico, int count, int n, int len);
int		ft_three_leap(char *nbr, t_dico *dico);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_len.c

int		ft_strlen(const char *str);
int		ft_intlen(const int nbr);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_putstr.c

void	ft_putstr(char *str);
void	ft_putchar(char pouet);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_read.c

char	*ft_def_filename(const int argc, char **argv);
char	*ft_put_in_split(const char *filename);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_split.c

t_dico	*ft_split(char *str, char *charset);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_split_v2.c

int		ft_count_word(char *str);
int		ft_strlen_custom(char *str);
char	*ft_strdup(char *str, int len);
char	**ft_double_split(char *str);
t_dico	*ft_set_dico(char **str);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_str_manip.c

int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, int n);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen_dico(t_dico *dico);

#endif
