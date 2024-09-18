#include <string.h>
#include <stdio.h>
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
//int	main(void)
//{
//	char	str[] = "salut";
//	printf("%s", ft_strchr(str, 108));
//	return (0);
//}

