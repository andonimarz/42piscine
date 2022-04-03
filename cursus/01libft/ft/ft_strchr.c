/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:34:00 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/03 14:52:55 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	char	str[] = "abcdefghijklmnopq";

	printf("%s\n", ft_strchr(str, 'W'));
	return (0);
}*/

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		return (((char *)s) + i);
	return (NULL);
}
