#include <stdio.h>
//void	incre(char *c)
//{
//	*c += 1;
//}

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	while(s[i])
	{
		f(&s[i]);
		i++;
	}
}

//int	main(void)
//{
//	char	str[] = "123";
//	ft_striter(str, incre);
//	printf("%s", str);
//	return (0);
//}
