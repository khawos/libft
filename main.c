#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "salut";
	char	*dest;
	dest = ft_strdup(str);
	printf("%s", dest);
	return (0);
}
