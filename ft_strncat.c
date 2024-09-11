char	*ft_strncat(char *dest, const char *src, size_t n)
{	
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i]	= '\0';
	return (dest);
}

// WARNING le man dit que src a pas besoin d octet fina si elle contient
// n caracteres ou plus.J arrive pas trop a comprendre le sens de cette phrase.
// qu est ce que n caracter ? n > zero ?
// A CLARIFIER
// 
//int	main(void)
//{
//	#include <stdio.h>
//	#include <string.h>
//	char	dest[100] = "coucou";
//	char	src[] = "kaka";
//	printf("%s\n", strncat(dest, src, 0));
//	char	dest2[100] = "coucou";
//	char	src2[] = "kaka";
//	printf("%s\n", ft_strncat(dest2, src2, 0));
//	return (0);
//}
