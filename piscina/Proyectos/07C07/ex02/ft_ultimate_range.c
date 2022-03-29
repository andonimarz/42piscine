/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:40:03 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/10 15:49:37 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*range;
	int	i;

	i = 0;
	printf("%d\n", ft_ultimate_range(&range, 1, 6));
	printf("%d\n", range[i]);
	return (0);
}

int	ft_ultimate_range(int **range, int min, int max)
{

}
