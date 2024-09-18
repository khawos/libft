char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; //LIGNE A VERIFIER 
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
//WARNING la fonction ne mets pas toujour un octe nul a la fin contrairement
//au regle que demande l ecole. a voir qui prime entre le pdf et la fonction.

//int	main(void)
//{
//	#include <string.h>
//	#include <stdio.h>
//	char	dest[100] = "coucou";
//	char	src[100] = "kakaka";
//	printf("%s\n", strncpy(dest, src, 15));
//	char	dest2[100] = "coucou";
//	char	src2[100] = "kakaka";
//	printf("%s\n", ft_strncpy(dest2, src2, 15));
//	return (0);
//}
