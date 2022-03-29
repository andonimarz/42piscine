/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:29:37 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/24 17:47:42 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	str[4] = "hola";

	ft_putstr(str);
	return (0);
} */

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		write(1, &str[i], 1);
	}
}
