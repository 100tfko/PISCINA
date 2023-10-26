/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:59:50 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/13 14:07:45 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 97 || str[i] > 122)
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
		result = ft_str_is_lowercase(str);
	return (0);
}*/
