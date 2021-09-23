/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 08:59:19 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/19 22:59:09 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	main(int argc, char **argv)
{	
	t_tab	*tab;
	int		size;
	int		*input_params;

	input_params = ft_split_to_atoi(argv[1], " ");
	size = ft_get_size(input_params);
	tab = ft_tab_create(size);
	tab->size_backup = size;
	if (ft_errors_input(argv[1], argc)
		|| ft_errors_numbers(input_params, tab))
	{
		ft_putstr("Error\n");
		return (1);
	}
	ft_exec_all(tab, input_params);
	if (!ft_final_check(tab, input_params))
		ft_show_tab(tab);
	ft_tab_free(tab);
	return (0);
}
