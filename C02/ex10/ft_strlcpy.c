#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*
int	main()
{
	char	src[] = "Hello world";
	char	dest[3];
	unsigned int	size;
	unsigned int	res;

	size = sizeof(dest);
	res = ft_strlcpy(dest, src, size);

	printf("%s\n", dest);
	printf("Buffer size : %u\n", size);

	if (res < size)
		printf("Result : Copied");
	else
		printf("Result : Truncated");
}
*/
