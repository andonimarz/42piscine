/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:03:33 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/29 10:09:06 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	printf("Resultado = %d", ft_isalnum(100));
	return (0);
} */

int	ft_isalnum(int c)
{
	char	test;

	test = c;
	if ((test >= 'a' && test <= 'z') || (test >= 'A' && test <= 'Z')
		|| (test >= '0' && test <= '9'))
		return (1);
	else
		return (0);
}
