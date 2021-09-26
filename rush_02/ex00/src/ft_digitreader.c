/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitreader.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-berr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:41:01 by ple-berr          #+#    #+#             */
/*   Updated: 2021/09/26 23:11:10 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*ft_fill_zero(char *str, int len)
{
	char	*str_cat;

	if (len == 1)
	{
		str_cat = malloc(sizeof(char) * 4);
		str_cat[3] = '\0';
		str_cat[2] = str[0];
		str_cat[1] = '0';
		str_cat[0] = '0';
		return (str_cat);
	}
	if (len == 2)
	{
		str_cat = malloc(sizeof(char) * 4);
		str_cat[3] = '\0';
		str_cat[2] = str[1];
		str_cat[1] = str[0];
		str_cat[0] = '0';
		return (str_cat);
	}
	else
		return (str);
}

int	ft_digitreader_solo(char *str, t_dico *dico, const int n)
{
	int		i;
	char	*str_cat;

	i = 0;
	str_cat = malloc(sizeof(char) * 2);
	str_cat[0] = str[n];
	str_cat[1] = '\0';
	while (ft_strncmp(dico[i].nbr, str_cat, 1) != 0)
		i++;
	if (ft_strcmp(dico[i].nbr, str_cat) == 0)
	{
		ft_putstr(dico[i].letters);
		free(str_cat);
		return (1);
	}
	else
	{
		free(str_cat);
		return (0);
	}
}

int	ft_digitreader_double(char *str, t_dico *dico, const int n)
{
	int		i;
	char	*str_cat;

	i = 0;
	if (str[n + 1] == '0')
		return (1);
	str_cat = malloc(sizeof(char) * 3);
	str_cat[0] = str[n + 1];
	str_cat[1] = '0';
	str_cat[2] = '\0';
	while (ft_strcmp(dico[i].nbr, str_cat) != 0)
		i++;
	if (ft_strcmp(dico[i].nbr, str_cat) == 0)
	{	
		ft_putstr(dico[i].letters);
		ft_putstr(" ");
		free(str_cat);
		return (1);
	}
	else
	{
		free(str_cat);
		return (0);
	}
}

int	ft_digitreader_excep(char *str, t_dico *dico, const int n)
{
	int		i;
	char	*str_cat;

	i = 0;
	str_cat = malloc(sizeof(char) * 3);
	str_cat[0] = str[n + 1];
	str_cat[1] = str[n + 2];
	str_cat[2] = '\0';
	while (ft_strcmp(dico[i].nbr, str_cat) != 0)
		i++;
	if (ft_strcmp(dico[i].nbr, str_cat) == 0)
	{	
		ft_putstr(dico[i].letters);
		free(str_cat);
		return (1);
	}
	else
	{
		free(str_cat);
		return (0);
	}
}

int	ft_digitreader(char *str_input, t_dico *dico, const int n)
{
	char	*str;

	str = str_input;
	if (str[n] != '0')
	{
		if (!ft_digitreader_solo(str, dico, n))
			return (0);
		ft_putstr(" hundred ");
	}
	if (str[n + 1] == '0' && str[n + 2] == '0')
		return (1);
	if (str[n + 1] == '1')
	{
		if (!ft_digitreader_excep(str, dico, n))
			return (0);
	}
	else
	{
		if (!ft_digitreader_double(str, dico, n))
			return (0);
		if (str[n + 2] != '0')
			if (!ft_digitreader_solo(str, dico, n + 2))
				return (0);
	}
	return (1);
}
