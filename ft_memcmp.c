int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *s3;
	const unsigned char *s4;
	s3 = s1;
	s4 = s2;
	while (n > 0 && *s3 == *s4)
	{
		s3++;
		s4++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s3 - *s4);
}

//int	main(void)
//{
//	char buffer1[] = "hello";
//	char buffer2[] = "hello";
//	char buffer3[] = "hellp";
//	printf("Test 1: %d\n", ft_memcmp(buffer1, buffer2, 5));
//	printf("Test 2: %d\n", ft_memcmp(buffer1, buffer3, 5));
//	return (0);
//}

