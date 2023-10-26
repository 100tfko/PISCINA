/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:32:48 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/21 11:01:32 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		nb = ft_recursive_power(nb, power - 1) * nb;
	}
	return (nb);
}

/*int	main(void)
{
	int	n;
	int	power;

	n = 5;
	power = 3;
	n = ft_recursive_power(n, power);
	return (0);
}*/
