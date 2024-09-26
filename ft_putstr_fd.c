#include <unistd.h>
#include "libft.h"
void	ft_putstr_fd(char const *s, int fd)
{

	if (!s)		// peut etre inutile
		return;
	int	len;

	len = ft_strlen(s);
	write(fd, s, len);
}
