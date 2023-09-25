#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	i;

	min = 10;
	max = 22;
	arr = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
