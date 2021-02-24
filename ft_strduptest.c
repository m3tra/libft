#include "libft.h"

int main()
{
	char *s;
	s = ft_strdup((char*)"coucou");
	printf("%s\n", s);
	free(s);
	s = ft_strdup((char*)"");
	printf("%s\n", s);
	free(s);
	return (0);
}
