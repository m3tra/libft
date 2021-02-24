#include "libft.h"

void		ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (fd > 0)
	{
		i = 0;
		while (s[i])
			ft_putchar_fd(s[i++], fd);
	}
}
