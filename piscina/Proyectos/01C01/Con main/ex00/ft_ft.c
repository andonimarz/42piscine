/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:52:51 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/25 14:22:21 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int		num;

	num = 0;
	ft_ft(&num);
	printf("%d", num);
	return (0);
}

void	ft_ft(int *nbr)
{
*nbr = 42;
}
