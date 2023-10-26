/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-pasc <lde-pasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:44:11 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/19 22:48:19 by lde-pasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_decompositor(int n, char *dir);
void	ft_buffer(char *array, char *dir);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] < 'a' || str[i] > 'z')
		i += 1;
	while (str[i] >= 'a' && str[i] <= 'z')
	{
		write (1, &str[i], 1);
		i += 1;
	}
	write (1, " ", 1);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (&str[i]);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			i += 1;
			j += 1;
			if (to_find [j] == '\0')
				return (&str[i - j - 1]);
		}
		i++;
	}
	write(1, "Dict Error\n", 11);
	str[0] = 'E';
	return (&str[0]);
}

void	ft_itoa(int nb, char *dir)
{
	int		count;
	int		i;
	char	*array;

	if (nb == 0)
		return ;
	array = malloc(15);
	count = 1;
	i = 0;
	while ((nb / count) > 9)
		count *= 10;
	while (count > 0)
	{
		array[i] = ((nb / count) % 10);
		array[i] += 48;
		count /= 10;
		i += 1;
	}
	array[i] = '\0';
	ft_buffer(array, dir);
}

int	ft_atoi(char *str)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		ret = (str[i] - 48) + (ret * 10);
		i++;
	}
	if (i == 0)
		return (-1);
	return (ret);
}

int	main(int n, char *input[])
{
	int		nb;
	char	*dir;

	dir = "./numbers.dict";
	if (n < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (n == 2)
		nb = ft_atoi(input[1]);
	if (n == 3)
		nb = ft_atoi(input[2]);
	if (nb < 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (n == 3)
		ft_decompositor(nb, input[1]);
	else if (n == 2)
		ft_decompositor(nb, dir);
	return (0);
}
