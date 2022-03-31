/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:46:03 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/31 08:39:01 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

<<<<<<< HEAD
/* #include <stddef.h>
=======
/*#include <stddef.h>
>>>>>>> b6176f53f5c1ed4f8a187d3cf585dd8919a896a6
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
