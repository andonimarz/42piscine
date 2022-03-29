/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:31:24 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/27 15:29:10 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char str_dest[20];
	char str_src[] = "STRING2";

	printf("%s\n", str_dest);
	ft_strcpy(str_dest, str_src);
	printf("%s\n", str_dest);
	return (0);
} */

char	*ft_strcpy(char *dest, char *src)
{
	int	loop;

	loop = 0;
	while (src[loop])
	{
		dest[loop] = src[loop];
		loop++;
	}
	dest[loop] = '\0';
	return (dest);
}
