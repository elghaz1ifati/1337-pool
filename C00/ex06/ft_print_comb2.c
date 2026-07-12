#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	comb(int n)
{
	char	c;

	if (n < 10)
	{
		c = n + 48;
		ft_putchar('0');
		ft_putchar(c);
		return ;
	}
	c = (n / 10) + 48;
	ft_putchar(c);
	c = (n % 10) + 48;
	ft_putchar(c);
}

void	ft_print_comb2(void)
{
	int	c[2];

	c[0] = 0;
	while (c[0] < 99)
	{
		c[1] = c[0] + 1;
		while (c[1] < 100)
		{
			comb(c[0]);
			ft_putchar (' ');
			comb(c[1]);
			if (c[0] < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			c[1]++;
		}
		c[0]++;
	}
}
/*
int	main ()
{
	ft_print_comb2();
}
*/
