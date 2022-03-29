/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:51:46 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/07 11:18:34 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(void)
{	
	ft_generate_dict();
	ft_numb_atoi(12);
	write(1, g_str_dict_num, 50);
	write(1, "\n", 1);
	ft_char_atoi(12);
	write(1, g_str_dict_char, 50);
	return (0);
}

/* 
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_generate_dict();
		ft_input_desc(argv);
	}
	else if (argc == 3)
	{
		ft_store_dict(argv[1])
		ft_generate_dict()
	}
	else
		write(2, "Error", 5);
}
*/
