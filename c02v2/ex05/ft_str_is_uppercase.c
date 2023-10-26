/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:05:55 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/13 14:09:42 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i += 1;
	}
	return (1);
}

/*int	main(void)
{
	char	*str;
	int		result;

	str = "1234";
		result = ft_str_is_uppercase(str);
	return (0);
}*/
