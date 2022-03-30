/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:49:44 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/29 12:21:36 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stddef.h>
#include <stdio.h>

void	*memcpy(void *dst, const void *src, size_t n);

int	main(void)
{
	char src[] = "holahola";
	char dst[] = "@@@@@@";

	printf("%s", memcpy(dst, src, 6));
	return (0);
} */

void	*memcpy(void *dst, const void *src, size_t n)
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
