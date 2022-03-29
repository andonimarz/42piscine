/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:30:06 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/19 18:10:22 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	cadena [3];

	cadena [0] = '0';
	while (cadena [0] <= '9')
	{
		cadena [1] = '0';
		while (cadena[1] <= '9')
		{
			cadena [2] = '0';
			while (cadena [2] <= '9')
			{
				if (cadena [2] > cadena [1] && cadena [1] > cadena [0])
				{
					write(1, &cadena, 3);
					if (cadena [0] != '7')
					{
						write(1, ", ", 2);
					}
				}
				cadena [2]++;
			}
			cadena [1]++;
		}
	cadena [0]++;
	}
}
