/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:22:18 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/20 18:49:35 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 0;
	while (++a <= y)
	{
		b = 0;
		while (++b <= x)
		{
			if (a == 1 && b == 1)
				ft_putchar('/');
			else if ((a == y && b == 1) || (a == 1 && b == x))
				ft_putchar('\\');
			else if (a == y && b == x)
				ft_putchar('/');
			else if (a == 1 || b == 1 || a == y || b == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			if (b == x)
				ft_putchar('\n');
		}
	}
}
