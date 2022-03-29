/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:51:29 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/02 14:06:14 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	s1[] = "3253344535gs56351gs263";
	char	s2[] = "5";

	printf("%s", ft_strstr(s1, s2));
	return (0);
} */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		i2 = 0;
		while (to_find[i2] == str[i2 + i] && to_find[i2])
		{
			if (to_find[i2 + 1] == '\0')
				return (&str[i]);
			i2++;
		}
		i++;
	}
	return (0);
}
