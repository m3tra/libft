#include "libft.h"

static int	rng(char *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (s[start] && i < len)
	{
		start++;
		i++;
	}
	return (i);
}

int main()
{
	char *s;
	char *sub;

	s = "tripouille";
	sub = ft_substr("tripouille", 100, 1);
	printf("%s\n", sub);
	free(sub);
	printf("%d\n", rng(s, 100, 1));
	return (0);
}
