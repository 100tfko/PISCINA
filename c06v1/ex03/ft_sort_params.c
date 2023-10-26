/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:35:48 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/21 13:30:49 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(char *str)
{
	int	swap;
	int	first;
	int	second;
	int	size;

	size = 0;
	while (str[size])
		size += 1;
	first = 0;
	second = 1;
	while (first < (size - 1))
	{
		while (str[first] > str[second])
		{
			swap = str[first];
			str[first] = str[second];
			str[second] = swap;
			first = 0;
			second = 1;
		}
		first += 1;
		second += 1;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	ft_sort_int_tab(str);
	while (str[i])
	{
		write (1, &str[i], 1);
		i += 1;
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i += 1;
	}
	return (0);
}
