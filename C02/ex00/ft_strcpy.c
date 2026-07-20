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

	ft_strcpy(dest, src);
	printf("Src : %s\n", src);
	printf("Adrss of src : %p\n", (void*)src);
	printf("Des : %s\n", dest);
	printf("Adrss of dest : %p\n", (void*)dest);
}
// n.b: (void*) strips the type to match what *p expects, avoiding a -Werror crash
*/
