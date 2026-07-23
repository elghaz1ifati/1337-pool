#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest = '\0';
	return (dest);
}
/*
int	main()
{
	char	dest[30] = "hello ";
	char	src[] = "world";

	ft_strncat(dest, src, 4);
	printf("%s", dest);
}
*/
