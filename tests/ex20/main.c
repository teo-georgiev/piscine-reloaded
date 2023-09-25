#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str;

	str = "This is a string.";
	printf("Result:\t\t%s\n", ft_strdup(str));
	return (0);
}
