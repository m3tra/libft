#include "libft.h"

int main()
{
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	int x = ft_memcmp(s2, s3, 4);
	printf("%c %c\n", (unsigned char)s2[2], (unsigned char)s3[2]);
	printf("%d\n", x);
	return (0);
}
