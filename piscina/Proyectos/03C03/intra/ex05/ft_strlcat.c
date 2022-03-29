/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:07:07 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/03 19:08:27 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			s1[] = "This is ";
	char			s2[] = "a potentially long string";
	unsigned int	num;

	num = 16;
	printf("%s\n", s1);
	printf("%d\n", ft_strlcat(s1, s2, num));
	printf("%s\n", s1);
	return (0);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i2;
	unsigned int	i1;
	unsigned int	count;

	i2 = 0;
	i1 = 0;
	while (dest[i2] != '\0')
		i2++;
	while (src[i1] != '\0')
		i1++;
	count = 0;
	if (size > i2)
	{
		while (src[count] && count < (size - i2 - 1))
		{
			dest[i2 + count] = src[count];
			count++;
		}
		dest[i2 + count] = '\0';
	}
	return (i2 + i1);
}
