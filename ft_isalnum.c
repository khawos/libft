int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || ((c | 32) >= 'a' && (c | 32) <= 'z'));
}

//int	main(void)
//{
//	#include <stdio.h>
//	printf("%d", ft_isalnum(101));
//	return (0);
//}
