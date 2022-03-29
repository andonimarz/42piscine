/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:26:52 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/23 17:43:36 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	int	c;

	c = 'G';
	ft_putchar(c);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
