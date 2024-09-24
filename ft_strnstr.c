#include <string.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;

	if (*little == '\0')
		return ((char *)big);

	while (big[i] && i < len)
	{
		j = 0;
		c = i;
		while (big[c] == little[j] && c < len)
		{
			c++;
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

//int	main(void)
//{
//	char	str1[] = "coucou la team comment ca va";
//	char	str2[] = "comment ca va";
//
//	printf("%s", ft_strnstr(str1, str2, 20));
//	return (0);
//}
