/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lilfrank.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:53:45 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/22 12:46:22 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_fill_square(char **map, int arr[])
{
	int	size2;
	int	i;
	int	j;
	int	size;

	i = arr[0];
	j = arr[1];
	size = arr[2];

	size2 = size;
	while (size > 0)
	{
		while (size2 > 0)
		{	
			map[i][j] = 'X';
			size2--;
			i++;
		}
		map[i][j] = 'X';
		size--;
		j++;
	}
}

int	ft_empty_cell(char **map, int i, int j, int size)
{
	int	cell;

	cell = 1;
	while (cell <= size)
	{
		if (map[i + cell][j + size] == 'o' || map[i + size][j + cell] == 'o')
			return (0);
		cell++;
	}
	return (1);
}

int	ft_square(char **map,int rows,int cols, int i, int j, int size)
{
	if (i + size < rows && j + size < cols)
	{
		if (map[i + size][j] == '.' && map[i][j + size] == '.')
		{
			if (ft_empty_cell(map, i, j, size))
				return (1);
		}
	}
	return (0);
}

void	find_squere(char **map,int rows,int cols)
{
	int	i;
	int	j;
	int	size;
	int	arr[3];

	i = 0;
	j = 0;
	size = 1;
	while (i < rows)
	{
		while (j < cols)
		{
			if (map[i][j] == '.')
				size = 1;
			if (ft_square(map, rows, cols, i, j, size))
			{
				size++;
				arr[0] = i;
				arr[1] = j;
				arr[2] = size;
			}
			j++;
		}
		i++;
	}
	ft_fill_square(map, arr);
}

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

int	ft_checkcol(char *map)
{
	int col;
	int i;

	col = 0;
	i = 0;
	while (map[i] != '\n')
		i += 1;
	i += 1;
	while (map[i] != '\n')
	{
		i += 1;
		col += 1;
	}
	return (col + 1);
}

int	ft_checkrow(char *map)
{
	int	row;
	int i;

	row = 0;
	i = 0;
	while (map[i] != '\n')
		i += 1;
	i += 1;
	while (map[i])
	{
		if (map[i] == '\n')
			row += 1;
		i += 1;
	}
	return (row + 1);
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
	col = ft_checkcol(map);
	row = ft_checkrow(map);
	mapmx = (char **) malloc (row * sizeof(char *));
	while (i < col)
	{
		mapmx[i] = (char *) malloc (col * sizeof(char *));
		i += 1;
	}
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			mapmx[i][j] = map[5 + j + (i * col)];
			j += 1;
		}
	i += 1;
	}
	i = 0;
	find_squere(mapmx, row, col);
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
