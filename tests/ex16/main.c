#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;

	//str = "This is a string"; // Length: 16
	str = ""; // Length: 0
	printf("Strlen:\t%d\n", ft_strlen(str));
	return (0);
}
