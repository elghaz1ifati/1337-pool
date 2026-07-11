#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	e;
	int	tmp;

	i = 0;
	e = size -1;
	while (i < e)
	{
		tmp = tab[i];
		tab[i] = tab [e];
		tab[e] = tmp;
		i++;
		e--;
	}
}
