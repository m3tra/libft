#include "libft.h"

static int	is_set(char c, char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	nset(char *s, char *set)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (is_set(s[i], (char *)set) && s[i])
	{
		i++;
		n++;
	}
	if (i < ft_strlen((char *)s))
	{
		i = ft_strlen((char *)s) - 1;
		while (is_set(s[i], (char *)set) && s[i])
		{
			i--;
			n++;
		}
	}
	return (n);
}

int main()
{
	char *s1;
	char *set;
	char *swag;
	s1 = "   xxx   xxx";
	set = " x";
	swag = ft_strtrim(s1, set);

	int len = ft_strlen((char *)s1);

	int n = nset((char *)s1, (char *)set);
	int size;
	size = len - n + 1;
	printf("len: %d\nn: %d\nsize: %d\n", len, n, size);
	printf("%s\n", swag);
	free(swag);
	return (0);
}
