/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:03:53 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/09/12 11:50:16 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	last;

	if (nb == -2147483648)
	{
		write (1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		last = (nb + '0');
		write (1, &last, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		last = ((nb % 10) + '0');
		write (1, &last, 1);
	}
}

int	potency(int a, int x)
{
	int	cont;

	if (x == 0)
		return (1);
	cont = 1;
	while (cont < x)
	{
		a *= 10;
		cont++;
	}
	return (a);
}

void	ft_print_combn(int n)
{
	int	actual;
	int	round;
	int	zeros;

	actual = 1;
	while (actual < (potency(10, n)))
	{
		while ((actual % 10) == 0)
		{
			round = actual;
			zeros = 0;
			while ((round % 10) == 0)
			{
				round /= 10;
				zeros++;
			}
			actual += (((round % 10) + 1) * (potency (10, (zeros - 1))));
		}
		ft_putnbr (actual);
		write (1, ", ", 2);
		actual++;
	}
}	

int	main(void)
{
	ft_print_combn(6);
	return (0);
}
