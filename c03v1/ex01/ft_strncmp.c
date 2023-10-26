/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:28:30 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/09/16 12:37:00 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i += 1;
	}	
	return (0);
}

/*int	main(void)
{
	char			s1[7] = "aac";
	char			s2[15] = "aaa";
	unsigned int	n;

	n = 5;
	int	ret;

	ret = ft_strncmp(s1, s2, n);
	return (0);
}*/
