/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:30:01 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/21 16:29:20 by lcuevas-         ###   ########.fr       */
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

/*int	main(void)
{
	int	n;

	n = 1000000007;
	n = ft_is_prime(n);
	printf ("%d", n);
	return (0);
}*/
