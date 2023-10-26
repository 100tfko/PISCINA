/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:01:04 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/13 17:38:46 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	pos;
	unsigned int	count;

	pos = 0;
	count = 0;
	while (src[count] != '\0')
	{
		count += 1 ;
	}
	if (size < 1)
		return (count);
	while (pos < size)
	{
		dest[pos] = src[pos];
		pos += 1;
	}
	dest[size - 1] = '\0';
	return (count);
}

/*int	main(void)
{
	char			dest[5];
	char			src[] = "string";
	unsigned int	size;
	unsigned int	count;

	size = 5;
	ft_strlcpy(dest, src, size);
	return (0);
}*/
