/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:51:10 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/02/22 13:43:31 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, &str[0], 1);
		str++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	(void) argc;
	ft_putstr(argv[0]);
	return (0);
}
