#include <string.h>
#include <stdio.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *s3;
	const unsigned char *s4;
	int	c;
	s3 = s1;
	s2 = s4;
	while (*s3 == *s4 && n > 0)
	{
		s3++;
		s4++;
		n--;
	}
	return (1);
}

int	main(void)
{
	char	buffer1[100];
	char	buffer2[100];

	printf("%d", ft_memcmp(buffer1, buffer2, 10));
	return (0);
}

// ca seg fault je ne sais pas pourquoi. a revoir
