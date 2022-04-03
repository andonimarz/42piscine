/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:14:14 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/31 10:54:11 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stddef.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	char	str_dst[] = "dhdfdfdfgdgdddfgddgddsgsd";
	char	str_src [] = "12345678901234567890123";
	size_t	length;

	printf("Src = %s\n", str_src);
	printf("Dst = %s\n", str_dst);
	length = ft_strlcpy(str_dst, str_src, 12);
	printf ("Length of str is %zu\n", length);
	printf("Dst after strlcpy = %s", str_dst);
	return (0);
} */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	result;
	size_t	i;

	i = 0;
	result = 0;
	while (src[result])
		result++;
	if (dst == NULL || src == NULL)
		return (0);
	if (dstsize != 0)
	{
		while (i < (dstsize - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (result);
}
