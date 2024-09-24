#include <stdlib.h>
void	ft_memdel(void **ap)
{
	if (ap && *ap)
	{
	free(*ap);
	*ap == NULL;
	}
}

// CETTE FONCTION NE SERT A RIEN NE PAS UTILISER
// (a part pour free en bluetooth)

