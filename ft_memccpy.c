#include <string.h>
#include <stdlib.h>
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *d;
	unsigned char uc;
	const unsigned char *s;

	d = dest;
	s = src;
	uc = (unsigned char)c;

	while (n--)
	{
		if (*s == uc)
		{
			*d++ = *s++;
			return (d);
		}
		*d++ = *s++;
	}
	return (NULL);
}
