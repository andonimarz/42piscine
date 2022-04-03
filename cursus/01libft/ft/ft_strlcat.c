/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:07:07 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/03 13:24:33 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	char			s1[33] = "This is ";
	char			s2[] = "a potentially long string";
	unsigned int	num;

	num = 21;
	printf("%s\n", s1);
	printf("%zu\n", ft_strlcat(s1, s2, num));
	printf("%s\n", s1);
	return (0);
}
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (srclen);
	if (dstsize < dstlen)
		return (srclen + dstsize);
	else
	{
		while (src[i] && (dstlen + i) < dstsize)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		if ((dstlen + i) == dstsize && dstlen < dstsize)
			dst[dstlen + i - 1] = '\0';
		else
			dst[dstlen + i] = '\0';
	}
	return (dstlen + srclen);
}
