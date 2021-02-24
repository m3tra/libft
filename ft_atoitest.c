#include "libft.h"

int main()
{
	printf("%d\n", ft_atoi("Gui123  "));
	printf("%d\n", ft_atoi("-123"));
	printf("%d\n", ft_atoi("+--123"));
	printf("%d\n", ft_atoi("-+123"));
	printf("%d\n", ft_atoi("+123"));
	printf("%d\n", ft_atoi("+ +123"));
	printf("%d\n", ft_atoi("   123   "));
	printf("%d\n", ft_atoi("  -123a"));
	printf("%d\n", ft_atoi("+-54"));
	return 0;
}
