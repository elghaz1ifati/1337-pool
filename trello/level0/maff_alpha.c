#include <unistd.h>

int	main(void)
{
	char	a;
	char	c;

	a = 'a';
	while (a <= 'z')
	{
		if (a % 2 == 0)
			c = a - 32;
		else
			c = a;
		write(1, &c, 1);
		a++;
	}
	write(1, "\n", 1);
	return (0);
}
