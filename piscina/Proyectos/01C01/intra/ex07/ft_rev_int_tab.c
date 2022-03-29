/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 08:35:44 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/23 09:33:36 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	count;

	count = 0;
	size--;
	while (count < size)
	{
		aux = tab[count];
		tab[count] = tab[size];
		tab[size] = aux;
		count++;
		size--;
	}
}
