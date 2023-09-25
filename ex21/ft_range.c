#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	num;

	if (min >= max)
		return (0);
	range = malloc((max - min) * sizeof(int));
	i = 0;
	num = min;
	while (i < (max - min))
	{
		range[i] = num;
		num++;
		i++;
	}
	return (range);
}
