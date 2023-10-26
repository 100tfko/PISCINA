/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:35:50 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/09 15:05:11 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	pos;

	pos = 0;
	while (src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos += 1;
	}
	dest[pos] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[] = "    ";
	char	src[] = "string";

	ft_strcpy(dest, src);
	return (0);
}
tengo que comprobar que esto no hace overflow,
quizá haya que decirle que no lo haga si con el contador de chars
*/