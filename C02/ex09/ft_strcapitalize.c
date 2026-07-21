#include <stdio.h>

int	is_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	fst_letter;

	i = 0;
	fst_letter = 1;
	while (str[i] != '\0')
	{
		if (is_alphanum(str[i]))
		{
			if (fst_letter == 1 && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (fst_letter == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			fst_letter = 0;
		}
		else
			fst_letter = 1;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char txt[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Before : %s\n", txt);
	ft_strcapitalize(txt);
	printf("After : %s", txt);
}
*/
