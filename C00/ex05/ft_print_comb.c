#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(char n1, char n2, char n3)
{
	ft_putchar(n1);
	ft_putchar(n2);
	ft_putchar(n3);
	if (n1 < '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = '0';
	while (c1 <= '7')
	{
		c2 = c1 + 1;
		while (c2 <= '8')
		{
			c3 = c2 + 1;
			while (c3 <= '9')
			{
				ft_print_numbers(c1, c2, c3);
				c3++;
			}
			c2++;
		}
		c1++;
	}
}
