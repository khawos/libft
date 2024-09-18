char	*ft_strdup(const char *s)
{
	char	*d;
	int	len;
	int	i;

	len = ft_strlen(s);
	d = malloc((len + 1) * sizeof(char));
	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

//function tested but not optimised
//CHECK LATER IN 42
//please check if the string is empty whats happened to
//maybe u need a null byte at the and or not idk

//int	main(void)
//{
//	#include <stdio.h>
//	char	str[] = "pioncer";
//	char	*dest;
//	int	i = 0;
//	dest = ft_strdup(str);
//	printf("%s", dest);
//	return (0);
//}
