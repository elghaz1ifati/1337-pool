#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	s;

	i = 0;
	n = 0;
	s = 1;
	while (str[i] == ' ' || str[i] >= '\t' && str[i] <= '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * s);
}
/*
int	main()
{
	printf("%d", ft_atoi("	---+--+1234ab567"));
}
*/
