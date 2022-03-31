/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:07:07 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/31 11:04:50 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
} */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	dstlenght;
	unsigned int	srclenght;
	unsigned int	i;

	dstlenght = 0;
	srclenght = 0;
	while (dst[dstlenght] != '\0')
		dstlenght++;
	while (src[srclenght] != '\0')
		srclenght++;
	i = 0;
	if (dstsize > dstlenght)
	{
		while (src[i] && i < (dstsize - dstlenght - 1))
		{
			dst[dstlenght + i] = src[i];
			i++;
		}
		dst[dstlenght + i] = '\0';
	}
	return (dstlenght + srclenght);
}
