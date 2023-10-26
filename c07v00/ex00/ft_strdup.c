/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:55:55 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/22 17:49:55 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i += 1;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen (src);
	dest = (char *) malloc ((size + 1) * sizeof (char));
	while (src[i])
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\n';
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Avocado";
	char	*dest;

	dest = ft_strdup(src);
	printf ("%s", dest);
	return (0);
}*/
