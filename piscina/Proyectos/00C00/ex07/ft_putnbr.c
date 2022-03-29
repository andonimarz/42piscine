/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:55:59 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/10 13:53:58 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}

void	ft_putnbr(int nb)
{
	char	num;
	long	lnb;

	lnb = nb;
	if (lnb < 0)
	{
		write(1, "-", 1);
		lnb = -lnb;
	}
	if (lnb / 10)
		ft_putnbr(lnb / 10);
	num = lnb % 10 + '0';
	write(1, &num, 1);
}
