/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:38:58 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/07 11:33:14 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

//Looks for the beginning and the length of the number of a line

void	ft_numb_atoi(int y)
{
	int		x;
	int		i;

	i = 0;
	x = 0;
	while (g_dict[y][x])
	{
		while (g_dict[y][x + i] >= '0' && g_dict[y][x + i] <= '9')
		{
			if (g_dict[y][x + i + 1] < '0' || g_dict[y][x + i + 1] > '9')
			{
				ft_dict_to_str(y, x, i);
			}
			i++;
		}
		x++;
	}
}

//Copies the number to g_str_dict_num

void	ft_dict_to_str(int y, int x, int nb)
{
	int	i;

	i = 0;
	g_str_dict_num = malloc(nb * sizeof(char));
	while (i <= nb)
	{
		g_str_dict_num[i] = g_dict[y][x + i];
		i++;
	}
}

//Looks for the beginning and the length of the alphabetical word of the line

void	ft_char_atoi(int y)
{
	int		x;
	int		i;

	i = 0;
	x = 0;
	while (g_dict[y][x])
	{
		while ((g_dict[y][x + i] >= 'a' && g_dict[y][x + i] <= 'z')
			|| (g_dict[y][x + i] >= 'A' && g_dict[y][x + i] <= 'Z'))
		{
			if ((g_dict[y][x + i + 1] < 'a' || g_dict[y][x + i + 1] > 'z')
				&& (g_dict[y][x + i + 1] < 'A' || g_dict[y][x + i + 1] > 'Z'))
			{
				ft_char_to_str(y, x, i);
			}
			i++;
		}
		x++;
	}
}

//Copies the word to g_str_dict_char

void	ft_char_to_str(int y, int x, int nb)
{
	int	i;

	i = 0;
	g_str_dict_char = malloc(nb * sizeof(char));
	while (i <= nb)
	{
		g_str_dict_char[i] = g_dict[y][x + i];
		i++;
	}
}
