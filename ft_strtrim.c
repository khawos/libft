#include <stdlib.h>
#include "libft.h"
char	*ft_strtrim(char const *s)	// ce code marche est repsect la norme mais  est tres peut lisible a cause des tout les - 1 
{					// bref il y a surement plus beau a faire
	int	i;
	int	len;
	int	end;
	char	*dest;

	i  = 0;
	len = ft_strlen(s);
	end = len;
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[end - 1] == ' ' || s[end - 1] == ',' || s[end - 1] == '\n' || s[end - 1] == '\t')
		end--;
	dest = (char *)malloc((len - i - (len - end) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	len = 0;
	while (i < end)
		dest[len++] = s[i];

	return (dest);
}

//int	main(void)
//{
//	#include <stdio.h>
//	char	str[] = "";
//	printf("%s", ft_strtrim(str));
//	return (0);
//}
