#include "libft.h"

int main()
{
	char *mem;

	ft_memset(mem, 'j', 29);
	((char*) mem)[29] = '\0';

	printf("%p\n", ft_memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 20));
	return (0);
}
