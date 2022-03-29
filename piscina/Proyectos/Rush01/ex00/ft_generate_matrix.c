/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_matrix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:39:18 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/27 20:51:01 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_check_matrix(void);

void	ft_generate_matrix(char **tab, char **inp)
{
	int	i;
	int	row[4];

	i = 0;
	while (i++ < 4)
		row[i] = -1;
	while (++row[0] < 24)
	{
		row[1] = -1;
		while (++row[1] < 24)
		{
			row[2] = -1;
			while (++row[2] < 24)
			{
				row[3] = -1;
				while (++row[3] < 24)
				{
					ft_check_matrix();
				}
			}
		}
	}
}

void	ft_check_matrix(void)
{
	write(1, "ok", 2);
}

/* 	if (tab[row[0]][0] == inp[1][16] && tab[row[0]][5] == inp[1][24]
	&& tab[row[1]][0] == inp[1][18] && tab[row[1]][5] == inp[1][26]
	&& tab[row[2]][0] == inp[1][20] && tab[row[2]][5] == inp[1][28]
	&& tab[row[3]][0] == inp[1][22] && tab[row[3]][5] == inp[1][30]) */