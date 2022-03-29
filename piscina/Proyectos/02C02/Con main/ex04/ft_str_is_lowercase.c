/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:50:20 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/24 13:24:26 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str1[] = "dfsAdgsg";
	int		az;

	az = ft_str_is_lowercase(str1);
	printf("%d\n", az);
}
 */
int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	if (str[0])
	{
		while (str[i])
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}
