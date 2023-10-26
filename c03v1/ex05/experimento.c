/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   experimento.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:52:07 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/14 20:29:49 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		actual;
	int		counter;

	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		counter = 1;
		if (nb < 0)
			write (1, "-", 1);
		if (nb < 0)
			nb *= -1;
		actual = nb;
		while (actual > 10)
		{
			actual /= 10;
			counter *= 10;
		}
		while (counter >= 1)
		{
			ft_putchar(((nb / counter) % 10) + '0');
			counter /= 10;
		}
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, &str[0], 1);
		str++;
	}
	write (1, "\n", 1);
}

int	ft_strlen(char *str)
{
	int	number;

	number = 0;
	while (str [number] != '\0')
	{
		number++;
	}
	return (number);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int	max;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i += 1;
    max = (size - i - 1);
	while ((src[j] != '\0') && (j < (max)))
	{
		dest[i] = src[j];
		i += 1;
		j += 1;
	}
	/*if (ft_strlen(dest) == 0 || ft_strlen > size)
		return (ft_strlen(dest) + ft_strlen(src));
	else
		dest[i] = '\0';*/
	dest[i] = '\0';
	return (ft_strlen(dest));
}

int main(void) 
{
	char	s1[15] = "Hello";
	char	s2[15] = "World";
 	int		size = 8;
 	int		ret;
	
	ft_putstr(s1);
	ft_putstr(s2);
	ret = ft_strlcat(s1, s2, size);
	ft_putstr(s1);
	ft_putnbr(ret);
    ft_putnbr(size);
	return (0);
}
