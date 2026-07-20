#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char	*str = "Hello";
	int	n = 2;
	char	dest[10];

	printf("%s", ft_strncpy(dest, str, n));
}
*/
//n.b: wa can't compare an int with an unsigned int
