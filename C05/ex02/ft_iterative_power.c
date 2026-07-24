#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	res = 1;
	while (power > 0)
	{
		res = res * nb;
		i--;
	}
	return (res);
}
/*
int	main()
{
	printf("%d", ft_iterative_power(4, 3));
}
*/
