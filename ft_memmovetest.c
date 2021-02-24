#include "libft.h"

int main()
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;

	dest = src + 1;
	printf("%s\n", (unsigned char*) ft_memmove(dest, "consectetur", 5));
	printf("%s\n", (unsigned char*) ft_memmove(src, dest, 0));
	return (0);
}
