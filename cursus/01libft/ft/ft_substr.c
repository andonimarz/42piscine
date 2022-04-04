/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubuntu <lubuntu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:15:51 by marvin            #+#    #+#             */
/*   Updated: 2022/04/04 18:38:50 by lubuntu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char	s[] = "abcdefghijklm";

	printf("%s", ft_substr(s, 3, 2));
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc(len);
	if (ptr == NULL)
		return (NULL);
	else
	{
		while (len)
			ptr[i++] = s[start++];
	}
	return (ptr);
}
