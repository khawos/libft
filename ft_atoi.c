int	ft_atoi(const char *nptr)
{
	int	neg;
	int	res;

	neg = 0;
	res = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		*nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			neg = 1;
		*nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res *= 10;
		res += *nptr - '0';
		*nptr++;
	}
	if (neg == 1)
		res = -res;
	return (res);
}
