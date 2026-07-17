#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while(size >= 0)
	{
	
		i = 0;
		while (i < size - 1)
		{
			if (tab [i] > tab [i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		size--;
	}
}
/*
int	main()
{
	int	tab[] = {2, 3, 6, 9, 8, 1, 0, 4, 5, 10, 7};
	int	size = 11;
	int	i;

	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
*/
