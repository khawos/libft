#include <string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
        int     i;

        i = 0;
        while ((s1[i] || s2[i]) && n)
        {
                if (s1[i] != s2[i])
                        break;
                i++;
		n--;
        }
        return (s1[i] - s2[i]);
}

//int	main(void)
//{
//	#include <stdio.h>
//	char	str1[] = "salut";
//	char	str2[] = "saluu";
//	printf("%d\n", ft_strncmp(str1, str2, 100));
//	char	str3[] = "salut";
//	char	str4[] = "saluu";
//	printf("%d\n", strncmp(str3, str4, 100));
//	return (0);
//}
