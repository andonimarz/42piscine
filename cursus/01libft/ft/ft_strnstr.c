/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:11:38 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/03 17:19:11 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int	main(void)
{
	char needle[] = "0";
	char haystack[] = "fajsoaijdaosnnaoasoisajoj";

	printf("%s\n", strnstr(haystack, needle, 26));
	printf("%s\n", ft_strnstr(haystack, needle, 26));
	return (0);
}*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	in;
	size_t	ih;

	ih = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[ih] && ih < len)
	{
		in = 0;
		while (haystack[ih + in] == needle[in] && (in + ih) < len)
		{
			if (needle[in + 1] == '\0')
				return ((char *)&haystack[ih]);
			in++;
		}
		ih++;
	}
	return (0);
}
