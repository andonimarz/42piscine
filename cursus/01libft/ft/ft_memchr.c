/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:04:51 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/31 12:20:17 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memchr(const void *s, int c, size_t n);

int	main(void)
{
	char	str[] = "abacdefghijklmn";

	printf("%s", memchr(str, 'a', 4));
	return (0);
}

void	*memchr(const void *s, int c, size_t n)
{
	size_t	i;
	int		aux;

	i = 0;
	while ((i < n) && (((char *)s) + i))
	{
		aux = (((char)s) + i);
		if (aux == c)
			return (((char *)s) + i);
		i++;
	}
	return (NULL);
}
