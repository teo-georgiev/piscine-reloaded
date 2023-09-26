#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
int		err_check(int nb);

int	main(int argc, char **argv)
{
	char	buf;
	int		file;

	if (err_check(argc))
		return (0);
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		ft_putstr("Cannot read file.");
		close(file);
		return (0);
	}
	while (read(file, &buf, 1) != '\0')
		write(1, &buf, 1);
	close(file);
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int err_check(int nb)
{
	if (nb <= 1)
	{
		ft_putstr("File name missing.");
		return (1);
	}
	if (nb > 2)
	{
		ft_putstr("Too many arguments.");
		return (1);
	}
	return (0);
}
