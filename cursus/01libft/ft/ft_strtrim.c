/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:28:40 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/06 19:18:23 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char	s1[] = "holaholahola";
	char	set[] = "hol";

	printf("%s", ft_strtrim(s1, set))
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	is1;
	size_t	iset;
	size_t	len;

	is1 = 0;
	while (s1[is1])
	{
		iset = 0;
		while (set[iset])
		{
			//con strchr y strrchr????
			iset++;
		}
		is1++;
	}
}
