#include <unistd.h>

void	comb(char v[])
{
	if (v[0] == '7' && v[1] == '8' && v[2] == '9')
		write(1, v, 3);
	else
		write(1, v, 5);
}

void	ft_print_comb(void)
{
	char	c[5];

	c[0] = '0';
	c[3] = ',';
	c[4] = ' ';
	while (c[0] <= '7')
	{
		c[1] = c[0] + 1;
		while (c[1] <= '8')
		{
			c[2] = c[1] + 1;
			while (c[2] <= '9')
			{
				comb(c);
				c[2]++;
			}
			c[1]++;
		}
		c[0]++;
	}
}
/*
int main ()
{
	ft_print_comb();
}
*/
