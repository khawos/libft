void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	s = src;
	d = dest;

	while (n--)
		*d++ = *s++;
	return (dest);
}

// not yet tested but i think it s good
