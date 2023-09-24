#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = "This is a string";
	ft_putstr(str);
	return (0);
}
