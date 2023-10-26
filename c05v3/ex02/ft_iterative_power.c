/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:23:53 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/21 11:17:59 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ret;

	ret = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		ret *= nb;
		power -= 1;
	}
	return (ret);
}

/*int	main(void)
{
	int	n;
	int	power;

	n = 5;
	power = 3;
	n = ft_iterative_power(n, power);
	return (0);
}*/
