#include <string.h>
char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	c;
	char	*ptr;

	i = 0;
	j = 0;
	
	if (*needle == '\0')
		return ((char *)haystack); //ligne a verifier mais il me semble ok

	while (haystack[i])
	{
		c = i;
		ptr = (char *)&haystack[i];	//mdrrr
		while (haystack[c] == needle[j])
		{
			c++;
			j++;
			if (needle[j] == '\0')
				return (ptr);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

//int	main(void)
//{
//	#include <stdio.h>
//	char	str[] = "salut les amis";
//	char	str2[] = "les amis";
//	printf("%s", ft_strstr(str, str2));
//	return (0);
//}
