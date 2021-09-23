/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:19:34 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/15 17:34:50 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_calculate_nbr(char *str, const int i, int n_minus, int n_chiffres)
{
	int	cpt;
	int	cpt_puis;
	int	puis;
	int	n_final;

	cpt = 0;
	cpt_puis = 0;
	puis = 1;
	while (cpt != n_chiffres)
	{
		while (cpt_puis <= cpt)
		{
			puis = puis * 10;
			cpt_puis++;
		}
		n_final = n_final + (str[i - 1 - cpt] - 48) * puis;
		cpt++;
	}
	if (n_minus % 2 == 1)
		n_final = n_final * -1;
	return (n_final);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n_minus;
	int	n_chiffres;

	i = 0;
	n_minus = 0;
	n_chiffres = 0;
	while (str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			n_minus++;
		i++;
	}
	while (48 <= str[i] && str[i] <= 57)
	{
		n_chiffres++;
		i++;
	}
	if (n_chiffres != 0)
		return (ft_atoi_calculate_nbr(str, i, n_minus, n_chiffres));
	return (0);
}
