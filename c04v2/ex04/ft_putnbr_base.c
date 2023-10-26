/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:29:23 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/18 13:43:31 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
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

void	ft_putnbr_base(int nbr, char *base)
{
	long	c;
	int		b;
	int		i;

	i = 0;
	b = ft_strlen(base);
	c = b;
	if (nbr < 0)
		ft_putchar('-');
	while ((nbr / b) >= c || (nbr / b) <= (-c))
		c *= b;
	while (c >= 1)
	{
		if (nbr >= 0)
			ft_putchar(base[nbr / c]);
		else
			ft_putchar(base[(nbr / c) * -1]);
		nbr %= c;
		c /= b;
		i += 1;
	}
}

/*int	main(void)
{
	int		nbr;
	char	base [] = "0123456789abcdef";

	nbr = -2147483648;
	if (ft_check(base) == 0)
		return (0);
	ft_putnbr_base(nbr, base);
	return (0);
}*/
