/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decompositor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-pasc <lde-pasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:33:09 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/19 22:56:35 by lde-pasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_strstr(char *str, char *to_find);
void	ft_putstr(char *str);
void	ft_itoa(int nb, char *dir);

void	ft_buffer(char *array, char *dir)
{
	int		fd;
	char	*buf;

	buf = malloc (1024);
	fd = open(dir, O_RDONLY);
	read (fd, buf, 1024);
	close(fd);
	buf = ft_strstr(buf, array);
	if (buf[0] != 'E')
		ft_putstr(buf);
}

void	ft_zero(char *dir)
{
	char	*array;

	array = malloc(15);
	array[0] = '0';
	array[1] = '\0';
	ft_buffer(array, dir);
}

void	ft_decompositor3(int n, char *dir)
{
	n %= 1000;
	ft_itoa(n / 100, dir);
	if (n >= 100)
		ft_itoa(100, dir);
	n %= 100;
	if (n > 10 && n < 20)
		ft_itoa(n, dir);
	else
	{
		ft_itoa((n / 10) * 10, dir);
		ft_itoa(n % 10, dir);
	}
}

void	ft_decompositor2(int n, char *dir)
{
	if (n >= 1000000)
		ft_itoa(1000000, dir);
	n %= 1000000;
	ft_itoa((n / 100000), dir);
	if (n >= 100000)
		ft_itoa(100, dir);
	n %= 100000;
	if ((((n / 1000) > 10))
		&& ((n / 1000) < 20))
		ft_itoa(n / 1000, dir);
	else
	{
		ft_itoa(((n % 100000) / 10000) * 10, dir);
		ft_itoa((n % 10000) / 1000, dir);
	}
	if (n >= 1000)
		ft_itoa(1000, dir);
	ft_decompositor3(n, dir);
}

void	ft_decompositor(int n, char *dir)
{
	if (n == 0)
	{
		ft_zero(dir);
		return ;
	}
	ft_itoa((n / 10000000000) * 10, dir);
	ft_itoa((n % 10000000000) / 1000000000, dir);
	if (n >= 1000000000)
		ft_itoa(1000000000, dir);
	n %= 1000000000;
	ft_itoa((n / 100000000), dir);
	if (n >= 100000000)
		ft_itoa(100, dir);
	n %= 100000000;
	if ((((n / 1000000) > 10))
		&& ((n / 1000000) < 20))
		ft_itoa(n / 1000000, dir);
	else
	{
		ft_itoa(((n % 100000000) / 10000000) * 10, dir);
		ft_itoa((n % 10000000) / 1000000, dir);
	}
	ft_decompositor2(n, dir);
}
