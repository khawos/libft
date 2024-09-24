#include <string.h>
#include <stdlib.h>
char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < (int)size)
	{
		str[i] = '\0';
		i++;	
	}
	str[i] = '\0';
	return (str);
}

// PAS VERIFIE A CONSOLIDER 
