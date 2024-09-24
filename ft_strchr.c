#include <string.h>
#include <stdio.h>
char	*ft_strchr(const char *s, int c)
{
	char	*d;

	d = NULL;
	while (*s)
	{
		if (*s == c)
		{
			d = (char *)s;
			return (d);
		}
		s++;
	}
	return (d);
}

//int	main(void)
//{
//	char	str[] = "salut la team";
//	printf("%s", ft_strchr(str, 'a'));
//	return (0);
//}

