/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:25:33 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/27 20:45:11 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_test_left(int *n)
{
	int	i;
	int	left;
	int	max_left;

	i = -1;
	max_left = 0;
	left = 0;
	while (i++ < 4)
	{
		if (max_left < n[i])
		{
			max_left = n[i];
			left++;
		}
	}
	return (left);
}

int	ft_test_right(int *n)
{
	int	i;
	int	right;
	int	max_right;

	i = 4;
	max_right = 0;
	right = 0;
	while (i-- > 0)
	{
		if (max_right < n[i])
		{
			max_right = n[i];
			right++;
		}
	}
	return (right);
}
