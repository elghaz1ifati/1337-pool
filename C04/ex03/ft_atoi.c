#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	s;

	i = 0;
	nb = 0;
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
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * s);
}
/*
int	main()
{
	printf("%d", ft_atoi("	---+--+1234ab567"));
}
:wq



*/
