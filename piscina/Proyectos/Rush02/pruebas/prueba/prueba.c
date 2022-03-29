#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
 
char    *ft_strcpy(char *dest, char *src);
void    ft_open_numbers(void);
void    ft_read_numbers(int fd, char *dict);
int     ft_print_number(char **numbers, int argv);
 
char	*ft_strcpy(char *dest, char *src)
{
	int	loop;

	loop = 0;
	while (src[loop])
	{
		dest[loop] = src[loop];
		loop++;
	}
	dest[loop] = '\0';
	return (dest);
}

void    ft_open_numbers(void)
{
    int     fd;
    int     i;
    int     j;
    int     k;
    char    *dict;/* Guardaremos lo que ponga en numbers.dict */
    char    **numbers;/* Guardaremos cada linea de dict en  */
 
    dict = malloc(1000);/* Para poder modificar dict */
    numbers = malloc(1000);/* Para poder modificar numbers */
    fd = open("numbers.dict", O_RDONLY);/* CAMBIAR A READ Y WRITE MAS ADELANTE */
    if (fd == -1)
        printf("Dict Error \n");
    else
        ft_read_numbers(fd, dict);
    i = 0;
    j = 0;
    k = 0;
    while (dict[j])
    {
        numbers[i] = malloc(1);
        while (dict[j] != '\0' && dict[j] != '\n')
        {
            if (dict[j] != ' ')/* CAMBIAR EL 30 POR LA LINEA MAS LARGA DEL FICHERO */
            {
                numbers[i][k] = dict[j];
                k++;
            }
            j++;
        }
        k = 0;
        j++;
        i++;
    }
    free(dict);
    ft_print_number(numbers, 600);
}
 
void    ft_read_numbers(int fd, char *dict)
{
    char    data[1000];
    ssize_t num_bytes;
 
    num_bytes = read(fd, data, 1000);
    close(fd);
    if (num_bytes == 0)
    {
        printf("Archivo vacío \n");
    }
    else
    {
        ft_strcpy(dict, data);
    }
}
 