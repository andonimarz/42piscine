/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:54:05 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/03 16:25:04 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	char	str[] = "abcdefghijklmnopq";

	printf("%s\n", ft_strrchr(str, 'd'));
	return (0);
}*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return (((char *)s) + i);
		i--;
	}
	return (0);
}
