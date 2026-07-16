#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
/*
int	main()
{
	int	n1 = 1;
	int	n2 = 2;
	ft_swap(&n1, &n2);
	printf("n1 = %d\nn2 = %d", n1, n2);
}
*/
