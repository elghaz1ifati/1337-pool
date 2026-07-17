#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char dest[10];
	char *src = "hello";
	char *res;

	res = ft_strcpy(dest, src);
	printf("Src : %s\n", src);
	printf("Adrss of src : %p\n", (void*)src);
	printf("Des : %s\n", dest);
	printf("Adrss of dest : %p\n", (void*)dest);
	printf("Res : %s\n", res);
	printf("Adrss of res : %p", (void*)res);
}
*/
