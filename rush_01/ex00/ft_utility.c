/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 09:15:12 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/19 21:27:04 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_nbrarrlen(int *arr)
{
	int	len;

	len = 0;
	while (arr[len])
		len++;
	return (len);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n_minus;
	int	n_final;

	i = 0;
	n_minus = 0;
	n_final = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (*(str + i) == '+' || *(str + i) == '-')
	{
		if (*(str + i) == '-')
			n_minus++;
		i++;
	}
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		n_final = n_final * 10 + (*(str + i) - 48);
		i++;
	}
	if (n_minus % 2)
		n_final *= -1;
	return (n_final);
}

int	*ft_split_to_atoi(char *str, char *charset)
{
	int		i;
	int		len;
	int		*params;
	char	**str_splitted;

	i = 0;
	str_splitted = ft_split(str, charset);
	while (str_splitted[i] != '\0')
		i++;
	params = malloc(sizeof(int) * (i + 1));
	len = i;
	i = 0;
	while (i < len)
	{
		params[i] = ft_atoi(str_splitted[i]);
		free(str_splitted[i]);
		i++;
	}
	free(str_splitted[i]);
	free(str_splitted);
	return (params);
}

int	ft_get_size(int *params)
{
	int	size;

	size = 0;
	while (params[size] != '\0')
		size++;
	return (size / 4);
}
