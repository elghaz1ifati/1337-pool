#include <unistd.h>

void	printnbr(int nbr)
{
	if (nbr > 9)
		printnbr (nbr / 10);
	nbr = (nbr % 10 + '0');
	write (1, &nbr, 1);
}

int	main()
{
	int	nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if ((nbr % 3 == 0) && (nbr % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (nbr % 3 == 0)
			write(1, "fizz", 4);
		else if (nbr % 5 == 0)
			write(1, "buzz", 4);
		else
			printnbr(nbr);
		write(1, "\n", 1);
		nbr++;
	}
	return (0);
}
