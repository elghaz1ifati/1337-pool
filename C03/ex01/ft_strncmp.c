#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	printf("%d\n", ft_strncmp("Herlo", "Hello", 4));
	printf("%d\n", ft_strncmp("Hello", "Holla", 3));
	printf("%d", ft_strncmp("Hi", "Hi", 2));
}
*/
