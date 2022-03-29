/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:16:52 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/21 18:29:31 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 8;
	ft_ultimate_div_mod(&a, &b);
	printf("a / b = %d\n", a);
	printf("a %% b = %d", b);
}
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = 0;
	aux = *a / *b;
	*b = *a % *b;
	*a = aux;
}
