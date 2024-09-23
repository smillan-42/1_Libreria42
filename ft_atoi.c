int ft_atoi(const char *nptr)
{
	int	a;
	int	num;
	int	i;

	i = 0;
	a = 1;
	num = 0;
	while ((((nptr[i] >= 9) && (nptr[i] <= 13))
			|| (nptr[i] == ' ')) && (nptr[i] != '\0'))
	{
		i++;
	}
	while (((nptr[i] == '+') || (nptr[i] == '-')) && (nptr[i] != '\0'))
	{
		if (nptr[i] == '-')
			a = (-1) * a;
		i++;
	}
	while ((nptr[i] <= '9') && (nptr[i] >= '0') && (nptr[i] != '\0'))
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (a * num);
}