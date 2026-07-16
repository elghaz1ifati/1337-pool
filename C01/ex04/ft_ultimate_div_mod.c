#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (b != 0)
	{
		tmp = *a / *b;
		*b = *a % *b;
		*a = tmp;
	}
}
/*
int main ()
{
	int	n1 = 42;
	int	n2 = 2;
	
	printf("n1 = %d\n", n1);
	printf("n2 = %d\n", n2);
	ft_ultimate_div_mod(&n1, &n2);
	printf("div = %d\n",n1);
	printf("mod = %d\n", n2);
}
*/
