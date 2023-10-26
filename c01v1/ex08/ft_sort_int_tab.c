/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:36:17 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/08 19:54:41 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	first;
	int	second;

	first = 0;
	second = 1;
	while (first < (size - 1))
	{
		while (tab[first] > tab[second])
		{
			swap = tab [first];
			tab[first] = tab[second];
			tab[second] = swap;
			first = 0;
			second = 1;
		}
		first += 1;
		second += 1;
	}
}

/*int	main(void)
{
	int	tab[10];
	int	size;

	size = 8;
	tab[0] = 4;
	tab[1] = 3;
	tab[2] = 2;
	tab[3] = 1;
	tab[4] = 6;
	tab[5] = 8;
	tab[6] = 5;
	tab[7] = 8;
	ft_sort_int_tab(tab, size);
	return (0);
}
*/