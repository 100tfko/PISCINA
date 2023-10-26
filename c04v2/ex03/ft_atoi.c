/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:39:04 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/17 12:05:02 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	ret;

	i = 0;
	sign = 1;
	ret = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i += 1;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign *= -1;
		i += 1;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		ret = (str[i] - 48) + (ret * 10);
		i += 1;
	}
	return (ret * sign);
}

/*int	main(void)
{
	char	str[] = "   --+-1234qa33fwef ";
	int		ret;

	ret = ft_atoi(str);
	return (0);
}*/
