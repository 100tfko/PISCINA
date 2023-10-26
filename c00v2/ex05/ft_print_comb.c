/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:50:07 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/09/12 11:47:58 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	z = '0';
	while (z <= '9')
	{
		y = (z + 1);
		while (y <= '9')
		{
			x = (y + 1);
			while (x <= '9')
			{
				write (1, &z, 1);
				write (1, &y, 1);
				write (1, &x, 1);
				if (!(z == '7' && y == '8' && x == '9'))
					write (1, &", ", 2);
				x++;
			}
		y++;
		}
	z++;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	ft_print_comb();
	return (0);
}