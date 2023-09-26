#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*));
int	f(char *a);

int	main(void)
{
	char *tab[] = {"test", "something", "123", 0};

	printf("Result\t%d\n", ft_count_if(tab, &f));
	return (0);
}

int	ft_count_if(char **tab, int(*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

int	f(char *a)
{
	if (*a != 1)
		return (1);
	return (0);
}
