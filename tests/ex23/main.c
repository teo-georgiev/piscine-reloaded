#include <stdio.h>
#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
	printf("%d\t%d\n", point->x, point->y);
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	return (0);
}
