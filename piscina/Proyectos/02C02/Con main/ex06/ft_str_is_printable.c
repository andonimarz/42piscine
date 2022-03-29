/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:50:20 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/25 11:35:06 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str1[6];
	int		result;

	str1[0] = 35;
	str1[1] = 45;
	str1[2] = 66;
	str1[3] = 126;
	str1[4] = 32;
	str1[5] = '\0';
	result = ft_str_is_printable(str1);
	printf("%d\n", result);
	printf("%s\n", str1);
} */

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	if (str[0])
	{
		while (str[i])
		{
			if (str[i] < 33 || str[i] > 126)
				return (0);
			i++;
		}
	}
	return (1);
}
