#include "libft.h"

int main()
{
	char *gui = calloc(30, 1);
	ft_memset(gui, 'a', 5);
	printf("%s\n", gui);
	free(gui);
	printf("%zu", sizeof(int));
}
