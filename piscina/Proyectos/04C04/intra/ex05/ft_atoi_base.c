/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 20:04:27 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/07 16:54:39 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int		ft_atoi_base(char *str, char *base); */
int		ft_atoi(char *str);
int		ft_char_to_int(char *str, int nb);
void	ft_putnbr_base(int nbr, char *base, int *num);
int		ft_test_base(int i, char *base);

/* int	main(void)
{
	char str[] = " --  -++af86f4ab567";
	char base[] = "01234567";

	printf("Converted value = %d", ft_atoi_base(str, base));
	return (0);
} */

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;
	int	num;
	int	neg;
	int	i;

	neg = 1;
	num = 0;
	i = 0;
	nbr = ft_atoi(str);
	if (nbr < 0)
	{
		neg = -neg;
		nbr = -nbr;
	}
	ft_putnbr_base(nbr, base, &num);
	num = num * neg;
	return (num);
}

int	ft_atoi(char *str)
{
	int	i;
	int	i2;
	int	neg;

	i = 0;
	i2 = 0;
	neg = 1;
	while (str[i++])
	{
		if (str[i] == '-')
			neg = -neg;
		while (str[i + i2] >= '0' && str[i + i2] <= '9')
		{
			if (str[i + i2 + 1] < '0' || str[i + i2 + 1] > '9')
			{
				i2 = ft_char_to_int(&str[i], i2) * neg;
				return (i2);
			}
			i2++;
		}
	}
	return (0);
}

int	ft_char_to_int(char *str, int nb)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (i <= nb)
	{
		num = num + (str[i] - '0');
		if (i == nb)
			return (num);
		num = num * 10;
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base, int *num)
{
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	while (base[i])
		i++;
	if (ft_test_base(i, base) == 1)
	{
		if (nbr / i)
			ft_putnbr_base((nbr / i), base, num);
		*num = (*num * 10) + (nbr % i);
	}
}

int	ft_test_base(int i, char *base)
{
	int	loop;
	int	loop2;

	loop = 0;
	if (i == 0)
		return (0);
	while (base[loop])
	{
		loop2 = 0;
		if (base[loop] == '+' || base[loop] == '-')
			return (0);
		while (base[loop2])
		{
			if (base[loop] == base[loop2] && loop != loop2)
				return (0);
			loop2++;
		}
		loop++;
	}
	return (1);
}
