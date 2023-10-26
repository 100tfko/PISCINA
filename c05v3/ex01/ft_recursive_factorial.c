/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:17:51 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/21 11:17:24 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	tmp;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	tmp = nb;
	if (nb > 1)
		nb = nb * ft_recursive_factorial(nb -1);
	return (nb);
}

/*int	main(void)
{
	int	n;

	n = 5;
	n = ft_recursive_factorial(n);
	return (0);
}*/
