#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int	i;

	i = 0;
	dest = (char *)malloc((len - start + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (start < len)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

//int	main(void)
//{
//	char	str[] = "salut la team";
//	printf("%s", ft_strsub(str, 6, 8));
//	return (0);
//}
