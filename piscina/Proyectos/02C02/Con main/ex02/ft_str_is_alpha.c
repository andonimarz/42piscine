/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:50:20 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/25 09:23:41 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str1[] = "sdgsdgsdfASFA";
	int		az;

	az = ft_str_is_alpha(str1);
	printf("%d\n", az);
} */

int	ft_str_is_alpha(char *str)
{
	char	ch;
	int		i;

	i = 0;
	if (str[0])
	{
		while (str[i])
		{
			ch = str[i];
			if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')))
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}
