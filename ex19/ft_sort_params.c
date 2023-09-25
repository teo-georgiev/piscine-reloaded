#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putchar(char c);
void	ft_sort_params(int argc, char **argv);

int	main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < (argc - i - 1))
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j+1];
				argv[j+1] = temp;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

