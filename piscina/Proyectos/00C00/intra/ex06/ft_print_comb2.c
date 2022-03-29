/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:53:35 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/21 13:41:45 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	cadena[5];
	int		num1;
	int		num2;

	num1 = -1;
	while (++num1 <= 99)
	{
		num2 = -1;
		while (++num2 <= 99)
		{
			if (num1 < num2)
			{
				cadena[0] = num1 / 10 + '0';
				cadena[1] = num1 % 10 + '0';
				cadena[2] = ' ';
				cadena[3] = num2 / 10 + '0';
				cadena[4] = num2 % 10 + '0';
				write(1, &cadena[0], 5);
				if (!(num1 == 99 && num2 == 98))
					write(1, ",", 2);
			}
		}
	}
}
