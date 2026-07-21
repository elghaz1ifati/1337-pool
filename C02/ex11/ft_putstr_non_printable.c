#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hex;
	unsigned char	c;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
		{
			write (1, "\\", 1);
			write (1, &hex[c / 16], 1);
			write (1, &hex[c % 16], 1);
		}
		i++;
	}
}
/*
int main ()
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}
*/
