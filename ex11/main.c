#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 11;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
	printf("DIV\t%d\n", div);
	printf("MOD\t%d\n", mod);
	return (0);
}
