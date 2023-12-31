/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:01:37 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/07 12:02:56 by lcuevas-         ###   ########.fr       */
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
