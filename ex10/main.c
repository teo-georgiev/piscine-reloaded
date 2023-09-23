#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 23;
	b = 89;
	printf("Values 1:\t%d\t%d\n", a, b);
	ft_swap(&a, &b);
	printf("Values 2:\t%d\t%d\n", a, b);
	return (0);
}
