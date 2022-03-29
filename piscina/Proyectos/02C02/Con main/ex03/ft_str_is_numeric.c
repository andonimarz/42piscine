/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:34:41 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/25 11:24:16 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str1[] = "";
	int		checknum;

	checknum = ft_str_is_numeric(str1);
	printf("%d\n", checknum);
} */

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	if (str[0])
	{
		while (str[i])
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}
