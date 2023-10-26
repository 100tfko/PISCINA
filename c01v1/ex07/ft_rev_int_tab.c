/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:56:59 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/08 16:53:15 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swaper;
	int	pos;
	int	half;

	swaper = 0;
	pos = 0;
	half = (size / 2);
	while (half > 0)
	{
		swaper = tab[pos];
		tab[pos] = tab[size - 1];
		tab[size -1] = swaper;
		pos++;
		size--;
		half--;
	}
}

/*int	main(void)
{
	int	tab[9];
	int	size;

	size = 5;
	tab[0] = 1;
	tab[1] = 4;
	tab[2] = 6;
	tab[3] = 8;
	tab[4] = 9;
	ft_rev_int_tab(tab, size);
	return (0);
}*/