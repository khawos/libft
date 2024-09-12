#include <string.h>
#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s2; //unsigned char or const unsigned char
	unsigned int c2;

	c2 = (unsigned int)c;
	s2 = s;
	while (n--)
	{
		if (*s2 == c)
			return (s2);
		s2++;
	}
	return (NULL);
}

//FUNCTION NOT YET TESTED
