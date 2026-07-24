#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	i = 0;
	res = 1;
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
/*
int	main()
{
	printf("%d", ft_iterative_power(4, 3));
}
*/
