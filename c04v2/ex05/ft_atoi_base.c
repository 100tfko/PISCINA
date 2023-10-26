/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v2.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:27:42 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/17 11:53:36 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	ft_strstr(char *str, char to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find)
			return (1);
		i += 1;
	}
	return (0);
}

int	ft_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' 
		|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = 0;
		while (base[j])
		{
			if (i != j)
				if (base[i] == base[j])
					return (0);
			j += 1;
		}
		i += 1;
	}
	return (1);
}

int	ft_atoi_base(char*str, char *base)
{
	int	i;
	int j;
	int t;
	int	sign;
	int	ret;
	char *number;

	number = malloc(30);
	if (ft_check(base) = 0)
		return (0);
	i = 0;
	sign = 1;
	ret = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i += 1;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign *= -1;
		i += 1;
	}
	while (ft_strstr(base, str[i]) = 1)
	{
		number[j] = str[i];
		i +=1
		j +=1
	}	
