/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:49:44 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/03 12:03:33 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*memcpy(void *dst, const void *src, size_t n);

int	main(void)
{
	char src[] = "holahola";
	char dst[] = "@@@@@@";
	char src1[] = "holahola";
	char dst1[] = "@@@@@@";

	printf("Mi función: %s\n", memcpy(dst, src, 6));
	printf("memcpy = %s", memcpy(dst1, src1, 6));
	return (0);
} */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src || dst)
	{
		while (i < n)
		{
			((char *)dst)[i] = ((const char *)src)[i];
			i++;
		}
		return (dst);
	}
	return (NULL);
}
