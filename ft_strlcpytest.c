#include "libft.h"

int main()
{
	char dest[15];
	printf("%zu\n", ft_strlcpy(dest, "", 15));
	printf("%zu\n", ft_strlcpy(dest, "lorem", 15));
	printf("%zu\n", ft_strlcpy(dest, "lorem ipsum", 3));
	printf("%zu\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 15));
	printf("%zu\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0));
	return (0);
}
