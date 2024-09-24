#include <stdio.h>
//void	increodd(unsigned int i, char *c)
//{
//	if (i % 2 == 0)
//		*c += 1;
//}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

//int	main(void)
//{
//	char	str[] = "012345";
//	ft_striteri(str, increodd);
//	printf("%s", str);
//	return (0);
//}
