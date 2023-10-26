/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:09:29 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/13 17:11:00 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] > 126)
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
		result = ft_str_is_printable(str);
	return (0);
}
*/
