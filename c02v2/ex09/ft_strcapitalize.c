/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:43:41 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/13 14:29:35 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_alpha(char *str)
{
	if (str[0] >= 65 && (str[0] <= 90 || str[0] >= 97) && str[0] <= 122)
		return (1);
	return (0);
}

int	ft_str_numeric(char *str)
{
	if (str[0] >= 48 && str[0] <= 57)
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	if (str[0] >= 97 && str[0] <= 122)
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	if (str[0] >= 65 & str[0] <= 90)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (ft_str_alpha(&str[i]) == 1 || ft_str_numeric(&str[i]) == 1)
		{
			if (ft_str_is_lowercase(&str[i]) == 1)
				str[i] -= 32;
			i += 1;
			while (ft_str_alpha(&str[i]) == 1 || ft_str_numeric(&str[i]) == 1)
			{
				if (ft_str_is_uppercase(&str[i]) == 1)
					str[i] += 32;
				i += 1;
			}
		}
		i += 1;
	}
	return (str);
}

/*void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, &str[0], 1);
		str++;
	}
}

int	main(void)
{
	char	str[] = "SaLUt, comment tu vAs ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	ft_putstr(str);
	return (0);
}*/
