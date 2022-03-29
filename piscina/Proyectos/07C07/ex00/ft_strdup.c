/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:54:26 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/10 09:56:38 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	src[] = "JSIODHFISH";

	printf("%s", ft_strdup(src));
	return (0);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		size;
	int		i;

	size = 0;
	while (src[size])
		size++;
	ptr = malloc(sizeof(char) * (size + 1));
	if (!(ptr))
		return (NULL);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
