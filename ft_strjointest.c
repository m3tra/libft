#include "libft.h"

int main()
{
	char *s1;
	char *s2;

	s1 = "lorem ipsum";
	s2 = "dolor sit amet";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
