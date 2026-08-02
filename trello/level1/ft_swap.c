#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main()
{
	int	n1;
	int	n2;

	n1 = 10;
	n2 = 20;
	ft_swap(&n1, &n2);
	printf("%d, %d", n1, n2);
}
