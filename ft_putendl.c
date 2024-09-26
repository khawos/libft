#include <unistd.h>
#include "libft.h"
void	ft_putendl(char const *s)
{
	int	len;

	len = ft_strlen(s);
	write(1, s, len);
	write(1, "\n", 1);
}

//int	main(void)
//{
//	ft_putendl("salut");
//	return (0);
//}
