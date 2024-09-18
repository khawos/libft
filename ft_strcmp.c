#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}

//int	main(void)
//{
//	#include <stdio.h>
//	char	str1[] = "salut";
//	char	str2[] = "salutvvvvvv";
//
//	printf("%d\n", ft_strcmp(str1, str2));
//	char	str3[] = "salut";
//	char	str4[] = "salutvvvvvv";
//
//	printf("%d\n", strcmp(str3, str4));
//	return (0);
//}
