#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
int	main()
{
	int	*res;
	int	min = 5;
	int	max = 10;
	int	i;

	res = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d", res[i]);
		i++;
	}
	free(res);
}
*/
