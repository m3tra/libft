#include "libft.h"

int main()
{
	int n1 = 12345;
	int n2 = -12345;
	int n3 = -2147483648;
	int n4 = 2147483647;
	int n5 = 0;
	char *o1 = (char *)ft_itoa(n1);
	printf("%d : %s\n", n1, o1);
	free(o1);
	char *o2 = (char *)ft_itoa(n2);
	printf("%d : %s\n", n2, o2);
	free(o2);
	char *o3 = (char *)ft_itoa(n3);
	printf("%d : %s\n", n3, o3);
	free(o3);
	char *o4 = (char *)ft_itoa(n4);
	printf("%d : %s\n", n4, o4);
	free(o4);
	char *o5 = (char *)ft_itoa(n5);
	printf("%d : %s\n", n5, o5);
	free(o5);
	return (0);
}
