/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:54:07 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/28 21:04:19 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char string[] = "salut, comment tu vas ? 42mots QUARANte-deux; cinquante+et+un";

	write(1, &string, 50);
	write(1, "\n", 1);
	ft_strcapitalize(string);
	write(1, &string, 50);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		prev_space;
	int		i;

	prev_space = 0;
	i = 0;
	while (str[i])
	{
		if (prev_space || i == 0)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
				str[i] = str[i] - 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
			prev_space = 0;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			prev_space = 0;
		else if (str[i] >= '0' && str[i] <= '9')
			prev_space = 0;
		else
			prev_space = 1;
		i++;
	}
	return (str);
}
