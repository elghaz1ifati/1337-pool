#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main()
{
	int	n1 = 43;
	int	n2 = 4;
	int	d;
	int	m;

	ft_div_mod(n1, n2, &d, &m);
	printf("%d / %d = %d\n", n1, n2, d);
	printf("%d %% %d = %d", n1, n2, m);
}
*/
