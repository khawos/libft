#include <string.h>
size_t	ft_strlen(const char *s)
{
	size_t a;

	a = 0;
	while (s[a]) a++;
	return (a);
}
