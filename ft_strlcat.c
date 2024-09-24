#include <stdio.h>
#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = ft_strlen(src);
	i = 0;

	while (dst_len < size && dst[dst_len]) 
	{
        	dst_len++;
	}

	if (dst_len == size) 
	{
		return (dst_len + src_len);
	}

	while ((dst_len + i + 1) < size && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
//FONCTION PEUT ETRE FAUSSE
//C LA PIRE FONCTION APRES FT MEMDEL


//int	main(void)
//{
//	char	dest[100] = "hello";
//	char	src[] = "world";
//	printf("%ld", ft_strlcat(dest, src, 0));
//	return (0);
//}
