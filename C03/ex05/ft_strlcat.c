#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	i;
	unsigned int	j;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size <= len_d)
		return (size + len_s);
	i = len_d;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_d + len_s);
}
/*
int	main()
{
	char	dst[20] = "hello ";
	char	src[] = "world!";
	unsigned int 	res;
	res = ft_strlcat(dst, src, 12);
	printf("Res string: %s\n", dst);
	printf("Return value: %u", res);
}
*/
