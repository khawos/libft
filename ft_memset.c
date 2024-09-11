void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;	// be care to the value of c and don t make c to big (>255)

	ptr = s;
	while (n--)
		*ptr++ = c;
	return (s);
}

//int	main(void)
//{
//	#include <stdio.h>
//	char buffer[150];
//	int	i = 0;
//	ft_memset(buffer, 127, sizeof(buffer));
//	while (i < 150)
//	{
//		printf("%d ", buffer[i]);
//		i++;
//	}
//	return (0);
//}
