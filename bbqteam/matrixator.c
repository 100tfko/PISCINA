/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrixator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:53:45 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/21 20:32:47 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i += 1;
	}
}

void	ft_checker(char *map)
{
	int	col;
	int	row;
	int i;

	col = 0;
	row = 0;
	i = 0;
	while (map[i] != '.')
		i += 1;
	while (map[i] != '\n')
	{
		i += 1;
		col += 1;
	}
	while (map[i])
	{
		if (map[i] == '\n')
			row += 1;
		i += 1;
	}
}

void	ft_matrixator(char *map)
{
	char	**mapmx;
	int		i;
	int		j;
	int		col; /*size of the lines*/
	int		row; /*number of the lines*/

	i = 0;
	j = 0;
	col = 9;
	row = 9;
	mapmx = (char **) malloc (10 * sizeof(char *));
	while (i < 10)
	{
		mapmx[i] = (char *) malloc (10 * sizeof(char *));
		i += 1;
	}
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			mapmx[i][j] = map[4 + j + (i * col)];
			j += 1;
		}
	i += 1;
	}
	i = 0;
	while (i < row)
	{
		ft_putstr(mapmx[i]);
		i += 1;
	}
}

int	main(void)
{
	int		fd;
	char	*buf;

	buf = malloc(1024);
	fd = open("./map", O_RDONLY);
	read (fd, buf, 1024);
	close (fd);
	ft_matrixator(buf);
}
