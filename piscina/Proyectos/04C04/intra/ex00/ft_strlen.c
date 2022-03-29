/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:44:54 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/22 19:58:52 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str[5];
	int		n;

	str[0] = 'b';
	str[1] = 'y';
	str[2] = 'c';
	str[3] = 't';
	str[4] = '\0';
	n = ft_strlen(str);
	printf("%d\n", n);
	return (0);
}
*/
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		++n;
	}
	return (n);
}
