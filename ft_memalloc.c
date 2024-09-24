#include <string.h>
#include <stdlib.h>
#include <stdio.h>
void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = (void *) malloc(size); //quel interet de mettre (void *) la consigne demande ?
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size); // ici on utilise une ft qu on a deja fait dans la libi
	return (ptr);
}
