/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:46:03 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/29 11:39:03 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int	main(void)
{
	char str[] = "hola holita";

	printf("%s", ft_memset(str, 64, 2));
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
