int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
