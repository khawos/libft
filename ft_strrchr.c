#include <string.h>
#include <stdio.h>
char	*ft_strrchr(const char *s, int c)
{
	char	*d;

	d = NULL;
	while (*s)
	{
		if (*s == c)
			d = (char *)s;
		s++;
	}
	return (d);
}

//int	main(void)
//{
//	char	str[] = "salut la team";
//	printf("%s", ft_strrchr(str, 'a'));
//	return (0);
//}
