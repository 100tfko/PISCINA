/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com2b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:58:46 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/07 16:19:06 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	showcomb(int x, int y)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = (x / 10) + '0';
	b = (x % 10) + '0';
	c = (y / 10) + '0';
	d = (y % 10) + '0';
	if (!((x == 0) & (y == 1)))
		write (1, ", ", 2);
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 99)
	{
		y = x +1;
		while (y <= 99)
		{
			showcomb (x, y);
			y++;
		}
	x++;
	}
}
