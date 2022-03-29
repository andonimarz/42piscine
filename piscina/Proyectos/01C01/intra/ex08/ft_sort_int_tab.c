/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:06:30 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/22 19:45:39 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
