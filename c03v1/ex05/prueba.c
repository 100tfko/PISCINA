#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		actual;
	int		counter;

	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		counter = 1;
		if (nb < 0)
			write (1, "-", 1);
		if (nb < 0)
			nb *= -1;
		actual = nb;
		while (actual > 10)
		{
			actual /= 10;
			counter *= 10;
		}
		while (counter >= 1)
		{
			ft_putchar(((nb / counter) % 10) + '0');
			counter /= 10;
		}
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, &str[0], 1);
		str++;
	}
	write (1, "\n", 1);
}

int main(void) 
{
	char	s1[15] = "Hello";
	char	s2[15] = "World";
 	int		size = 15;
 	int		ret;
	
	ft_putstr(s1);
	ft_putstr(s2);
	ret = strlcat(s1, s2, size);
	ft_putstr(s1);
	ft_putnbr(ret);
	ft_putnbr(size);
	return (0);
}
