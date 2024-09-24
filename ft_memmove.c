#include <string.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int *d;
	unsigned int *str;
	const unsigned int *s;
	int	i;

	d = dest;
	s = src;
	i = 0;

	while (n--)
		str[i++] = *s++;
	while (i--)
		*d++ = *str++;
	return (dest);
}

//int	main(void)
//{
//	int	i = 0;
//	char	ptr[100];
//	char	ptr2[100];
//
//	memmove(ptr, ptr2, 10);
//	while (i < 15)
//	{
//		printf("%d ", ptr[i]);;
//		i++;
//	}
//	printf("\n");
//	i = 0;
//	while (i < 15)
//	{
//		printf("%d ", ptr2[i]);
//		i++;
//	}
//	return (0);
//}
