/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:54:36 by gkrusta           #+#    #+#             */
/*   Updated: 2023/02/22 11:28:34 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_empty_cell(char map[rows][cols], int i, int j, int size)
{
	int	cell;

	cell = 1;
	while (cell <= size)
	{
		if (map[i + cell][j + size] == 'o' || map[i + size][j + cell] == 'o')
			return (0);
		cel++;
	}
	return (1);
}

void	ft_square(char map[rows][cols], int i, int j, int size)
{
	if (i + size < rows && j + size < cols)
	{
		if (map[i + size][j] == '.' && map[i][j + size] == '.')
		{
			if (ft_empty_cell(map, i, j))
				return (1);
		}
	}
	return (0);
}

int	find_squere(char map[rows][cols])
{
	int	i;
	int	j;
	int	squere[rows][cols];
	int	size;
	int	arr[3];

	i = 0;
	j = 0;
	size = 1;
	cell = 1;
	while (i < rows)
	{
		while (j < cols)
		{
			if (map[i][j] == '.')
				size = 1;
			if (ft_square(char map[rows][cols], int i, int j, int size))
			{
				size++;
				arr[] = {i, j, size};
			}
			j++;
		}
		i++;
	}
	ft_current_squere(size)
}



