/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:44:27 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/14 19:28:25 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, &str[0], 1);
		str++;
	}
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
	unsigned int	count;
	unsigned int	szcnt;
	unsigned int	i;
	unsigned int	j;
	unsigned int	max;
	
	i = 0;
	j = 0;
	max = (size - ft_strlen(dest) - 1); 
	while (dest[i] != '\0')
		i += 1;
	while (src[j] != '\0' && j < max)
	{
		dest[i] = src[j];
		i += 1;
		j += 1;
	}
	if (ft_strlen(dest) == 0 || ft_strlen > size)
		return (ft_strlen(dest) + ft_strlen(src));
	else
		dest[i] = '\0';
	return (ft_strlen(dest));
}



int main(void)
{
 	char dest[15] = "Hello";
 	char src[15] = "World";
	unsigned int  ret;
	unsigned int  size;
  
	size = 15;
	ft_putstr(dest);
	ft_putstr(src);
	ret = ft_strlcat(dest, src, size);
	ft_putstr(dest);
}
