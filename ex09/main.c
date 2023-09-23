#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	nbr;

	nbr = 77;
	printf("\n%d\n", nbr);
	ft_ft(&nbr);
	printf("\n%d\n", nbr);
	return (0);
}
