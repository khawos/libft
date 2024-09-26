#include <stdio.h>
#include <stdlib.h>
int	ft_chakal(int n)	//REGARDER SI FT CHAKAL N EST PAS UNE FONCTION DEMANDER DANS LE PROJET QUE J AURAI PU LOUPER
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	long	nbr;

	nbr = n;
	len = ft_chakal(nbr);
	str = (char *) malloc((len + 1)* sizeof(char));
	if (!str)
		return (NULL);
	str[len] == '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0'; 
	while (nbr > 0)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

//int	main(void)
//{
//	printf("%s", ft_itoa(-2147483648));
//	return (0);
//}
