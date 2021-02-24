#include "libft.h"

int main()
{
	printf("%d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("%d\n", ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
	printf("%d\n", ft_strncmp("abcdefgh", "", 0));
	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
	printf("%c\n", '\0');
	printf("%c\n", '\200');
	printf("%c\n", '\97');

	return (0);
}
