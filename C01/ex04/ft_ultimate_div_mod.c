#include <unistd.h>

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
