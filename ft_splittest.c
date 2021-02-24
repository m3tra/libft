#include "libft.h"

int main()
{
	char *str;
	str = "     ";
	char **arr = ft_split(str, ' ');
	int i = 0;
	int j = 0;

	while (arr[j])
	{
		printf("%s\n", arr[j]);
		j++;
	}
	j = 0;
	while (arr[j])
		free(arr[j++]);
	free(arr);
	return (0);
}
