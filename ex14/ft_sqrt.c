int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (i);
	while (i <= nb / i && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
