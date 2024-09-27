#include <string.h>
int	ft_strnequ(char	const *s1, char const *s2, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)	// je ne sais pas sije dois renvoyer true si
	{				// l une des deux chaine est plus petite mais egal (avec n=> s1 et n => s2)
		if (s1[i] != s2[i])	// voir desciption de la fonction
			return (0);
		i++;
	}
	return (1);
}

//int	main(void)
//{
//	#include <stdio.h>
//	char	s1[] = "salrt la team";
//	char	s2[] = "salut la team";
//	printf("%d", ft_strnequ(s1, s2, 4));
//	return (0);
//}
