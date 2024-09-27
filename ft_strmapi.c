#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(s);
	dest = (char *)malloc((len + 1) * sizeof(char));
	while (s[i])
	{
		dest[i] = f(s[i]);
		i++;	
	}
	dest[i] = '\0';
	return (dest);
}
