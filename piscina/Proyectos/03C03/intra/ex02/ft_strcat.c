/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:32:00 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/02 09:10:46 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char			s2[] = "gs99ewtwetewgdsg";
	char			s1[] = "gs5sdgdfhdfgd5";

	printf("%s\n", s1);
	printf("%s", ft_strcat(s1, s2));
	return (0);
} */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (dest[i])
		i++;
	while (src[i2])
		dest[i++] = src[i2++];
	dest[i] = '\0';
	return (dest);
}
