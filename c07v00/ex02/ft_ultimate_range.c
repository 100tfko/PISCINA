/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:28:37 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/22 20:19:31 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int	**range, int min, int max)
{
	int	*range;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (0);
	range = (int *) malloc ((size) * sizeof (int));
	while (i < size)
	{
		range[i] = min + i;
		i += 1;
	}
	return (size);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*arr;

	min = 2;
	max = 5;
	arr = ft_range(min, max);
	printf ("%d", arr[1]);
}*/
