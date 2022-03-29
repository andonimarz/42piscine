/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:54:21 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/02 17:53:10 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			str_dest[] = "dhdfdfdfgdgdddfgddgddsgsd";
	char			str_src [] = "12345678901234567890123";
	unsigned int	length;

	write(1, str_src, 24);
	write(1, "\n", 1);
	write(1, str_dest, 24);
	write(1, "\n", 1);
	length = ft_strlcpy(str_dest, str_src, 3);
	printf ("Length of str is %d\n", length);
	write(1, "\n", 1);
	write(1, str_dest, 24);
	return (0);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	result;
	unsigned int	i;

	i = 0;
	result = 0;
	while (src[result] != '\0')
		result++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (result);
}
