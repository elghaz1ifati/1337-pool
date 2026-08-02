#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char	dest[11];
	char	*src = "hello fati";

	printf("dest = %s / src = %s", ft_strcpy(dest, src), src);
}
