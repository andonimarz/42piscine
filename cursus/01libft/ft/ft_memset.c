/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:46:03 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/31 11:05:50 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int	main(void)
{
	char str[] = "hola holita";

	printf("%s", ft_memset(str, 64, 3));
	return (0);
} */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*aux;

	aux = b;
	while (len--)
		*aux++ = c;
	return (b);
}
