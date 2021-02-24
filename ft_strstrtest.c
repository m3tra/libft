#include <stdlib.h>
#include <stdio.h>

char *ft_strstr(const char *haystack, const char *needle);

int main()
{
	printf("%s\n", ft_strstr("olaadeus", ""));
	printf("%s\n", ft_strstr("olaadeus", "ola"));
	printf("%s\n", ft_strstr("olaadeus", "adeus"));
	printf("%s\n", ft_strstr("olaadeus", "aad"));
	printf("%s\n", ft_strstr("olaadeus", "gui"));

	return 0;
}
