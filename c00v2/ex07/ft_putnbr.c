/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:35:17 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/07 16:20:17 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
