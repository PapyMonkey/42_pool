/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 18:58:50 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/29 14:30:44 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	main(int argc, char **argv)
{
	char	*dic_name;
	char	**tab;
	char	*str;
	t_dico	*dico;

	if (ft_error_arg(argc, argv))
		return (1);
	dic_name = "src/numbers.dict.txt";
	str = ft_put_in_split(dic_name);
	tab = ft_double_split(str);
	dico = ft_set_dico(tab);
	ft_three_leap(argv[1], dico);
	if (ft_strlen(dico[ft_strlen_dico(dico)].nbr) < ft_strlen(argv[1])
		|| ft_three_leap(argv[1], dico) == 0)
		;
//	{
//		ft_putstr("Error\n");
//		return (1);
//	}
	return (0);
}
