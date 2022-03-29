/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:12:51 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/02 16:48:42 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	str_dest[20] = "ghdfhdf";
	char	str_src[] = "FRASUDHUHAU";
	int		size = 2;

	write(1, str_dest, 20);
	write(1, "\n", 1);
	ft_strncpy(str_dest, str_src, size);
	write(1, str_dest, 20);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	loop;

	loop = 0;
	while (src[loop] && loop < n)
	{
		dest[loop] = src[loop];
		loop++;
	}
	while (loop < n)
	{
	dest[loop] = '\0';
	loop++;
	}
	return (dest);
}
