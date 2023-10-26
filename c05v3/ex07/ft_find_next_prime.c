/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:22:41 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/21 16:29:32 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb < 2)
		return (0);
	while (div <= nb / div)
	{
		if (nb % div == 0)
			return (0);
		div += 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb += 1;
	return (nb);
}

/*int	main(void)
{
	int	n;

	n = 2000000000;
	n = ft_find_next_prime(n);
	printf ("%d", n);
	return (0);
}*/
