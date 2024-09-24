#include <string.h>
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr; //unsigned char est pas obligatoire
			      //mais plus apprecie
	ptr = s;
	while (n--)
		*ptr++ = 0;
}

//int	main(void)
//{
//	char	buffer[15];
//	ft_bzero(buffer, sizeof(buffer));
//	int	i = 0;
//	while (i < 20)
//	{
//		printf("%d ", buffer[i]);
//		i++;
//	}
//	return (0);
//}
