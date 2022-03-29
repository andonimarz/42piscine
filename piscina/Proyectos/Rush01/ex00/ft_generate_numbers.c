/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 11:04:50 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/27 20:46:34 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_combnumbers(int *counter, char **combnumbers);
void	ft_coordinates(int *n, int *counter, char **combnumbers);
int		ft_test_left(int *n);
int		ft_test_right(int *n);
char	*ft_strcpy(char *dest, char *src);
void	ft_generate_matrix(char **tab, char **inp);

void	ft_generate_numbers(char **input)
{
	int		counter;
	char	**combnumbers;
	int		i;

	combnumbers = malloc(24 * sizeof(char *));
	i = 0;
	while (i < 24)
		combnumbers[i++] = malloc(6);
	i = 0;
	counter = -1;
	ft_combnumbers(&counter, combnumbers);
	ft_generate_matrix(combnumbers, input);
}

void	ft_combnumbers(int *counter, char **combnumbers)
{
	int	i;
	int	n[4];

	i = -1;
	while (i++ < 4)
		n[i] = 0;
	while (n[0]++ < 4)
	{
		n[1] = 0;
		while (n[1]++ < 4)
		{
			n[2] = 0;
			while (n[2]++ < 4)
			{
				n[3] = 0;
				while (n[3]++ < 4)
				{
					if (n[0] != n[1] && n[0] != n[2] && n[0] != n[3]
						&& n[1] != n[2] && n[1] != n[3] && n[2] != n[3])
						ft_coordinates(n, counter, combnumbers);
				}
			}
		}
	}
}

void	ft_coordinates(int *n, int *counter, char **combnumbers)
{
	int		left;
	int		right;
	int		i;
	char	str[6];

	*counter = *counter + 1;
	left = ft_test_left(n);
	right = ft_test_right(n);
	str[0] = left + '0';
	str[5] = right + '0';
	i = 0;
	while (i++ < 4)
		str[i] = n[i - 1] + '0';
	ft_strcpy(combnumbers[*counter], str);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	loop;

	loop = 0;
	while (loop < 6)
	{
		dest[loop] = src[loop];
		loop++;
	}
	dest[loop] = '\0';
	return (dest);
}
