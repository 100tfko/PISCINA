/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:07:33 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/15 12:25:57 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str [len] != '\0')
	{
		len++;
	}
	return (len);
}

/*int	main(void)
{
	char	*str;

	str = "string";
	ft_strlen(str);
	return (0);
}*/
