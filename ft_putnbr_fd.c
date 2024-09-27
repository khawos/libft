#include <unistd.h>
#include <stdio.h>
void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

//int	main(void)
//{
//	#include <fcntl.h>
//	int	fd;
//
//	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);	// cree un txt 
//	ft_putnbr_fd(42, fd);
//	close(fd);
//	return (0);
//}
