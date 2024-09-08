#include <string.h>
#include <stdio.h>
char	*ft_strcpy(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	src[] = "coucou toi";
	char	dest[] = "";
	printf("la fonction :%s\n", strcpy(dest, src));
	printf("ma fonction :%s", ft_strcpy(dest, src));
	return (0);
}
