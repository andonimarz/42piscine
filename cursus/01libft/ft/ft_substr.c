/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:15:51 by marvin            #+#    #+#             */
/*   Updated: 2022/04/04 16:15:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char    s[] = "abcdefghijklm";

	printf("%s", ft_substr(s, 3, 2));
	return (0);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = (char *)malloc(len);
	if (ptr == NULL)
		return (NULL);
	else
	{
		while (len)
			ptr++ = s[start++];
	}
	return (ptr);
}