#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;
	int		len;

	len = ft_strlen(src);
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int	main()
{
	char src[] = "hello";
	char *copy;
	copy = ft_strdup(src);

	printf("%s\n", src);
	printf("%p\n", src);
	printf("%s\n", copy);
	printf("%p", copy);

	free(copy);
}
*/
