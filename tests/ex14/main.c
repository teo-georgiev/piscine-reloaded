#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	nb;

	nb = 64;
	printf("Check for %d:\t\t%d\n", nb, ft_sqrt(nb));
	nb = 0;
	printf("Check for %d:\t\t%d\n", nb, ft_sqrt(nb));
	nb = 4;
	printf("Check for %d:\t\t%d\n", nb, ft_sqrt(nb));
	nb = 2147395600;
	printf("Check for %d:\t%d\n", nb, ft_sqrt(nb));
	nb = 2147483647;
	printf("Check for %d:\t%d\n", nb, ft_sqrt(nb));
	return (0);
}
