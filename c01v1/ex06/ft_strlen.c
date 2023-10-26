/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:07:33 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/08 21:01:51 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putstr(char *str)
{
	int	number;

	number = 0;
	while (str [number] != '\0')
	{
		number++;
	}
	return (number);
}

/*int	main(void)
{
	char	*str;

	str = "string";
	ft_putstr(str);
	return (0);
}*/
