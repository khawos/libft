int	ft_strequ(char	const *s1, char const *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

//int	main(void)
//{
//	#include <stdio.h>
//	char	s1[] = "salut la eeam";
//	char	s2[] = "salut la team";
//	printf("%d", ft_strequ(s1, s2));
//	return (0);
//}
