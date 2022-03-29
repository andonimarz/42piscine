/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:40:23 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/29 11:46:46 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/* #include <stdio.h>

void	*ft_bzero(void *s, size_t len);

int	main(void)
{
	char str[] = "hola holita";

	printf("%s", ft_bzero(str, 2));
	return (0);
} */

void	*ft_bzero(void *s, size_t len)
{
	unsigned char	*aux;

	aux = s;
	while (len--)
		*aux++ = 48;
	return (s);
}
