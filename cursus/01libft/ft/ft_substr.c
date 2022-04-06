/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:15:51 by marvin            #+#    #+#             */
/*   Updated: 2022/04/06 18:14:37 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char	s[] = "abcdefghijklm";

	printf("%s", ft_substr(s, 3, 2));
	return (0);
} */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	while (s[i] && i < len)
		i++;
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	if (start > ft_strlen(s))
	{
		*str = '\0';
		return (str);
	}
	ft_strlcpy(str, &s[start], i + 1);
	return (str);
}

