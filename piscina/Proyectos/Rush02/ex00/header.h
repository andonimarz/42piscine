/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 13:46:35 by amarzana          #+#    #+#             */
/*   Updated: 2022/03/07 11:27:26 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

//Globals
char	**g_dict;
char	**g_input;
char	*g_str_dict_num;
char	*g_str_dict_char;
//char	g_dict_path[100];

//generate_dict.c
void	ft_generate_dict(void);
int		ft_dict_nb_lines(void);
int		ft_dict_lngst_line(void);
void	ft_fill_dict(void);

//atoi.c
void	ft_numb_atoi(int y);
void	ft_dict_to_str(int y, int x, int nb);
void	ft_char_atoi(int y);
void	ft_char_to_str(int y, int x, int nb);

/* //input.c
void	ft_input_desc(char *str);
void	ft_check_hund_thou(int i, int *i2, char *thousand, int length);
void	ft_store_input(char *value, int count, int length, int type);
void	ft_fill_thousand(char *thousand);
void	ft_add_zero(char *g_thousand);

*/
//tools.c
//int		ft_strlen(char *str);

#endif