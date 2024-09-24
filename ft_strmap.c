#include <stdlib.h>
#include "libft.h"
//char	fun(char c)
//{
//	c += 1;
//	return (c);
//}

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(s);
	dest = (char *)malloc((len + 1) * sizeof(char));
	while (s[i])
	{
		dest[i] = f(s[i]);
		i++;	
	}
	dest[i] = '\0';
	return (dest);
}

//int	main(void)
//{
//	char const	str[] = "012345";
//	printf("%s", ft_strmap(str, fun));
//	return (0);
//}

//fonction faite du premier coup
