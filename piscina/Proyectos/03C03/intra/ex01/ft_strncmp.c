/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:57:21 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/02 09:10:44 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char			s1[16] = "aaaaaaaaaaags55";
	char			s2[16] = "aaaaaaaaaaags99";
	int				result;
	unsigned int	num;

	num = 16;
	result = ft_strncmp(s1, s2, num);
	printf("%d", result);
} */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				total;

	i = 0;
	total = 0;
	while ((s1[i] || s2[i]) && total == 0 && i < n)
	{
		total = s1[i] - s2[i];
		i++;
	}
	return (total);
}
