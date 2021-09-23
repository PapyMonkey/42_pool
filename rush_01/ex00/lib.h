/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 09:19:56 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/19 23:00:32 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# define SIZE 4

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

// ----------------------------------------------------------------------------
// STRUCTS

typedef struct s_tab{
	int	*grid;
	int	size;
	int	size_backup;
}t_tab;

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_tab.c

t_tab	*ft_tab_create(int size);
void	ft_tab_free(t_tab *tab);
void	ft_tab_init(t_tab *tab);
void	ft_tab_set(t_tab *tab, int x, int y, int value);
int		ft_tab_get(t_tab *tab, int x, int y);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_utility.c

int		ft_strlen(char *str);
int		ft_nbrarrlen(int *arr);
int		ft_atoi(char *str);
int		*ft_split_to_atoi(char *str, char *charset);
int		ft_get_size(int *params);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_split.c

int		ft_char_is_separator(char c, char *charset);
int		ft_count_words(char *str, char *charset);
void	ft_write_words(char *dest, char *src, char *charset);
void	ft_write_tab(char **str_split, char *str, char *charset);
char	**ft_split(char *str, char *charset);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_put.c

void	ft_putchar(const char c);
void	ft_putstr(const char *str);
void	ft_putnbr(int nb);
void	ft_putarrayint(const int *arr);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_show.c

void	ft_show_tab(t_tab *tab);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_math.c

int		ft_factorial(int nb);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_check.c

int		ft_is_value_valid(t_tab *tab, int x, int y, int *params);
int		ft_is_duplicate(t_tab *tab, int x, int y);
int		ft_is_zerox(t_tab *tab, int x, int y);
int		ft_is_zeroy(t_tab *tab, int x, int y);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_zero_inter.c

int		ft_zero_inter_count(t_tab *tab, int x, int y);
int		ft_zero_inter(t_tab *tab, int x, int y);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_height.c

int		ft_height_value(t_tab *tab, int direction);
int		ft_height_maxvalue(t_tab *tab, int direction);
int		ft_height_col(t_tab *tab, int x, int direction);
int		ft_height_row(t_tab *tab, int y, int direction);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_autocomplete.c

void	ft_autocomplete_case_1(t_tab *tab, int i);
void	ft_autocomplete_case_n(t_tab *tab, int i);
void	ft_autocomplete(t_tab *tab, int *sets);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_voidfiller.c

void	ft_voidfiller(t_tab *tab, int x, int y);
void	ft_void_exec(t_tab *tab);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_solve.c
//
void	ft_exec_all(t_tab *tab, int *params);
t_tab	ft_solve(t_tab tab, int i, int val, int *params);
t_tab	ft_solve2(t_tab *tab, int *i, int *value, int **params);

// ----------------------------------------------------------------------------
// FUNCTIONS - ft_errors.c

int		ft_errors_input(char *input, int n);
int		ft_errors_numbers(int *params, t_tab *tab);
int		ft_final_check(t_tab *tab, int *params);

#endif
