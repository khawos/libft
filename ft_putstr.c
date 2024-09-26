#include <unistd.h>
#include "libft.h"
void	ft_putstr(char const *s)
{
	int	len;

	len = ft_strlen(s);
	write(1, s, len);
}
