/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:59:25 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/07 11:31:10 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

//Makes a malloc of numb_lines*longest_line and fills it.
void	ft_generate_dict(void)
{
	int		numb_lines;
	int		longest_line;
	int		i;

	numb_lines = ft_dict_nb_lines();
	longest_line = ft_dict_lngst_line();
	g_dict = malloc(numb_lines * sizeof(char *));
	i = 0;
	while (i < numb_lines)
		g_dict[i++] = malloc(longest_line);
	ft_fill_dict();
}

//Counts the number of lines according to '\n' and 'EOF'
int	ft_dict_nb_lines(void)
{
	int			read_error;
	int			numb_lines;
	int			length;
	char		buf;

	read_error = open("numbers.dict", O_RDONLY);
	if (read_error == -1)
		write(1, "Error", 5);
	length = 0;
	numb_lines = 0;
	while (read(read_error, &buf, 1))
	{
		if (buf == '\n' || buf == EOF)
			numb_lines++;
		length++;
	}
	close(read_error);
	return (numb_lines);
}

//measures between '\n' or 'EOF' and stores the longest line's length
int	ft_dict_lngst_line(void)
{
	int			read_error;
	int			longest_line;
	int			length;
	char		buf;

	read_error = open("numbers.dict", O_RDONLY);
	if (read_error == -1)
		write(1, "Error", 5);
	length = 0;
	longest_line = 0;
	while (read(read_error, &buf, 1))
	{
		if (buf == '\n' || buf == EOF)
		{
			if (length >= longest_line)
				longest_line = length;
			length = 0;
		}
		length++;
	}
	close(read_error);
	return (longest_line - 1);
}

//Moves the content of numbers.dict to **dictionary
void	ft_fill_dict(void)
{
	int			read_error;
	int			y;
	int			x;
	char		buf;

	x = 0;
	y = 0;
	read_error = open("numbers.dict", O_RDONLY);
	if (read_error == -1)
		write(1, "Error", 5);
	while (read(read_error, &buf, 1))
	{
		if (buf != '\n' && buf != EOF)
		{
			g_dict[y][x++] = buf;
		}
		else
		{
			y++;
			x = 0;
		}
	}
	close(read_error);
}
