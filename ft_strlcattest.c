#include "libft.h"

int main()
{
	char dest[30];
	ft_memset(dest, 0, 30);

	printf("%zu ", ft_strlcat(dest, "123", 3));
	printf("%s\n", dest);
	ft_memset(dest, 0, 30);
	printf("%zu ", ft_strlcat(dest, "123", 4));
	printf("%s\n", dest);
	return 0;
}
