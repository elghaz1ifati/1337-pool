#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	e;

	i = 0;
	e = size - 1;
	while (i < e)
	{
		ft_swap(&tab[i], &tab[e]);
		i++;
		e--;
	}
}
/*
int	main()
{
	int	tab[] = {10, 20, 30, 40, 50};
	int	size = 5;
	int	i;

	printf("Before reverse : ");
	i = 0;
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}

	i = 0;
	printf("\nAfter reverse : ");
	ft_rev_int_tab(tab, size);
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
*/
