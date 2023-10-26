/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:02:28 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/07 23:12:50 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int	a;
	int	b;
	int	d;
	int	r;
	int	*div;
	int	*mod;

	div = &d;
	mod = &r;
	a = 7;
	b = 3;
	ft_div_mod(a ,b ,div, mod);
	return (0);
}*/
