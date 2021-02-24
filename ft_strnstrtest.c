#include "libft.h"

int main()
{
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "sit", 10));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0));
	return (0);
}
