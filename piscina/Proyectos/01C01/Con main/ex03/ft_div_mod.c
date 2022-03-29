/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:02:08 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/21 18:16:19 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;

	a = 50;
	b = 8;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("a / b = %d\n", div);
	printf("a %% b = %d\n", mod);
}
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
