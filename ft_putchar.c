#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);	// a ton besoin d un retour a la ligne... je ne pense pas
}
