/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:18:23 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/07 23:27:30 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swaper;

	swaper = *a;
	*a = (*a / *b);
	*b = (swaper % *b);
}

/*int	main(void)
{
	int	div;
	int	res;
	int	*a;
	int	*b;

	div = 7;
	res = 3;
	a = &div;
	b = &res;
	ft_ultimate_div_mod(a, b);
	return (0);
}*/