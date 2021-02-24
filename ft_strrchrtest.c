#include "libft.h"

int main()
{
	char	str2[] = "bonjour";
	char	*str;

	str = ft_strrchr(str2 + 2, 'b');
	printf("%s\n", str);
	return (0);
}
