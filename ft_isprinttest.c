#include <ctype.h>

#include "libft.h"

int main()
{
	for (int i = 0; i < 512; i++)
	{
		// if (!!ft_isprint(i) != !!isprint(i))
			printf("%3d : %d\n", i, isalnum(i));
	}

}
