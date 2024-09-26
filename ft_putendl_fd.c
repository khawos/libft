void	ft_putendl_fd(char const *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write(fd, s, len);
	write(1, "\n", 1);
}
