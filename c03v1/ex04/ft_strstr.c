/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:49:31 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/14 20:46:14 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (&str[i]);
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			i += 1;
			j += 1;
			if (to_find [j] == '\0')
				return (&str [i - j]);
		}
	i += 1;
	}
	return (0);
}

/*int	main(void)
{
	char	str[50] = "aa bb aaaaaaa";
	char	to_find[] = "bb";
	char	*ret;
	
	ret = ft_strstr(str, to_find);
	return (0);
}*/
