/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:36:05 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/09 09:47:43 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	row;
	int	column;

	row = 1;
	(void)argc;
	while (argv[row])
	{
		column = 0;
		while (argv[row][column])
			column++;
		write(1, argv[row], column);
		write(1, "\n", 1);
		row++;
	}
	return (0);
}
