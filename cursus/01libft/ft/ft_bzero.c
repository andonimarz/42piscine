/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:40:23 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/03 11:58:38 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stddef.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t len);

int	main(void)
{
	char str[] = "hola holita";

    ft_bzero(str, 2);
	printf("%s", str);
	return (0);
} */

void	ft_bzero(void *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
	((char *)s)[i] = 0;
	i++;
	}
}
