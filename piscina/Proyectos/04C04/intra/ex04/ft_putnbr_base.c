/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 09:16:48 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/08 09:51:18 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_test_base(char *base, int *test);
void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	char base [] = "01";

	ft_putnbr_base(-2150, base);
	return (0);
} */

void	ft_test_base(char *base, int *test)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*test = 1;
	while (base[i] && *test == 0)
	{
		j = i;
		while (base[j])
		{
			j++;
			if (base[i] == base[j])
				*test = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '%'
			|| base[i] == '/' || base[i] == '*' || base[i] == '='
			|| base[i] == ',' || base[i] == '.'
			|| base[i] < 33 || base[i] > 126)
			*test = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		test;
	long	nb;

	i = 0;
	test = 0;
	ft_test_base(base, &test);
	nb = nbr;
	if (test == 0)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		while (base[i])
			i++;
		if (nb < i)
			write(1, &base[nb], 1);
		if (nb >= i)
		{
			ft_putnbr_base(nb / i, base);
			ft_putnbr_base(nb % i, base);
		}
	}
}
