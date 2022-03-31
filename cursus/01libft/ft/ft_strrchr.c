/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:54:05 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/31 12:00:18 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	char	str[] = "abcdefghijklmnopq";

	printf("%s\n", ft_strrchr(str, 'd'));
	return (0);
} */

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (s[--i])
	{
		if (s[i] == c)
			return (((char *)s) + i);
	}
	return (NULL);
}
