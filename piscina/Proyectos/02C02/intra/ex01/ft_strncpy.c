/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:12:51 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/05 16:31:57 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	loop;

	loop = 0;
	while (src[loop] && loop < n)
	{
		dest[loop] = src[loop];
		loop++;2,,
		 
	}
	while (loop < n)
	{
		dest[loop] = '\0';
		loop++;
	}
	return (dest);
}
