/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:56:13 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/29 10:02:37 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	printf("Resultado = %d", ft_isdigit(58));
	return (0);
} */

int	ft_isdigit(int c)
{
	char	test;

	test = c;
	if (test >= '0' && test <= '9')
		return (1);
	else
		return (0);
}
