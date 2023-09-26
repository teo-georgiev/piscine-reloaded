#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int));
void	ft_double(int a);

int	main(void)
{
	int	tab[] = {3, 5, 7, 9};
	int	length;

	length = 4;
	ft_foreach(tab, length, &ft_double);
	return (0);
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = -1;
	while (++i < length)
		f(tab[i]);
}

void	ft_double(int a)
{
	printf("%d ", a * 2);
}
