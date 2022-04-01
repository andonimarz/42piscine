/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:11:38 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/01 10:54:11 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
} */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	in;
	size_t	ih;
	char	*ndl;
	char	*hstk;

	ih = 0;
	ndl = (char *)needle;
	hstk = (char *)haystack;
	if (*ndl == '\0')
		return (hstk);
	while (hstk[ih] && ih < len)
	{
		in = 0;
		while (hstk[ih + in] == ndl[in])
		{
			if (ndl[in + 1] == '\0')
				return (&hstk[ih]);
			in++;
		}
		ih++;
	}
	return (0);
}
