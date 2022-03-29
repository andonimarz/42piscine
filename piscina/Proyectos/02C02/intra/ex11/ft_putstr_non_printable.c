/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:14:50 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/28 21:24:50 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 31 && str[i] >= 0) || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			ft_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i += 1;
	}
}

void	ft_hex(int num)
{
	char	*hex_tab;

	hex_tab = "0123456789abcdef";
	if (num > 16)
	{
		ft_hex(num / 10);
		ft_hex(num % 10);
	}
	else
		write(1, &hex_tab[num], 1);
}
