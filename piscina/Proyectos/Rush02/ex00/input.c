/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:43:42 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/07 11:21:58 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/* void	ft_input_desc(char *str)
{
	int		i;
	int		i2;
	int		length;
	char	thousand[100];

	i = 1;
	i2 = 1;
	ft_fill_thousand(thousand);
	length = ft_strlen(str);
	g_input = malloc(100 * sizeof(char *))
	while (i++ <= length)
	{
		ft_store_input(str[i], i2, length, 1);
		i2++;
		ft_check_hund_thou(i, i2, thousand, length);
		i++;
	}
}

//Checks if should put hundred, thousand, million...
void	ft_check_hund_thou(int i, int *i2, char *thousand, int length)
{
	char	hundred[3];

	hundred[0] = '1';
	hundred[1] = '0';
	hundred[2] = '0';
	if ((i % 3) == 0)
	{
		ft_store_input(hundred, i2, length, 0);
		i2++;
	}
	if (((i - 1) % 3) == 0)
	{
		ft_store_input(thousand, i2, length, 0);
		ft_add_zero(thousand);
		i2++;
	}
}

//Stores the value into g_input
void	ft_store_input(char *value, int *i2, int length, int type)
{
	int	i;

	i = 0;
	g_input[i2] = malloc(length)
	if(type == 1)
		g_input[i2][0] = value;
	if(type == 0)
	{
		while(value[i++])
			g_input[i2][i] = value[i];
	}
	*i2 = *i2 + 1;
}

//Fills thousand with 1000 and \0
void	ft_fill_thousand(char *thousand)
{
	int	i;

	thousand[0] = '1';
	thousand[1] = '0';
	thousand[2] = '0';
	thousand[3] = '0';
	i = 4;
	while (i < 100)
	{
		thousand[i] = '\0';
		i++;
	}
}

//Adds 3 zeros to thousand
void	ft_add_zero(char *thousand)
{
	int	length;

	length = ft_strlen(thousand);
	thousand[length + 1] = '0';
	thousand[length + 2] = '0';
	thousand[length + 3] = '0';
} */
