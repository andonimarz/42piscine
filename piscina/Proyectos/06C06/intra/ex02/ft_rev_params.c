/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:49:38 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/09 09:56:37 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	column;

	argc = argc - 1;
	while (argc > 0)
	{
		column = 0;
		while (argv[argc][column])
			column++;
		write(1, argv[argc], column);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
