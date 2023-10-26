/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:11:25 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/22 13:47:01 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	r;

	r = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while ((r <= nb / r) && (r < 46341))
	{
		if (r * r == nb)
			return (r);
		r += 1;
	}
	return (0);
}

/* int	main(void)
{
	int	n;
	int	ret;

	n = 26;
	ret = ft_sqrt(n);
	printf ("%d", ret);
	return (0);
}
 */