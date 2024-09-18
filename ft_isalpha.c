#include <ctype.h>
#include <stdio.h>
int	ft_isalpha(int c)
{
	return ((c | 32) >= 'a' && (c | 32) <= 'z');
}
//int	main(void)
//{
//	printf("%d\n", isalpha(66));
//	printf("%d\n", ft_isalpha(66));
//	return (0);
//}
