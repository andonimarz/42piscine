/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:06:30 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/01 15:58:43 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tabla[12];
	int	tamano;
	int	loop;

	tamano = 12;
	tabla[0] = 2;
	tabla[1] = 0;
	tabla[2] = 4;
	tabla[3] = 5;
	tabla[4] = 3;
	tabla[5] = 1;
	tabla[6] = 2;
	tabla[7] = 0;
	tabla[8] = 4;
	tabla[9] = 5;
	tabla[10] = 3;
	tabla[11] = 1;
	loop = 0;
	while (loop < tamano)
	{
		printf("%d\n", tabla[loop]);
		loop++;
	}	
	ft_sort_int_tab(tabla, tamano);
	loop = 0;
	while (loop < tamano)
	{
		printf("%d", tabla[loop]);
		loop++;
	}
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	loop1;
	int	loop2;
	int	aux;

	loop1 = 0;
	while (loop1 < size)
	{
		loop2 = 0;
		while (loop2 < size)
		{
			if (tab[loop1] < tab[loop2])
			{
				aux = tab[loop1];
				tab[loop1] = tab[loop2];
				tab[loop2] = aux;
			}
			loop2++;
		}
		loop1++;
	}
}
