/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:20:31 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/09 11:54:29 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("%d", ft_sqrt(1835124443));
}
 */
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb > 2147483641)
		return (0);
	while (i * i <= nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
