/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:08:46 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/14 20:43:06 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i += 1;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i += 1;
		j += 1;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char			dest[14] = "aa";
	char			src[15] = "bbcc";
	unsigned int	n;

	n = 2;

	ft_strncat(dest, src, n);
}*/
