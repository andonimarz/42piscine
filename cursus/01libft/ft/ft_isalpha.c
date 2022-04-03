/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:33:51 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/29 09:55:32 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	printf("Resultado = %d", ft_isalpha(100));
	return (0);
} */

int	ft_isalpha(int c)
{
	char	test;

	test = c;
	if ((test >= 'a' && test <= 'z') || (test >= 'A' && test <= 'Z'))
		return (1);
	else
		return (0);
}
