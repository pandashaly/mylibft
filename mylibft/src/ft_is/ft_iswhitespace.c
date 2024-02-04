#include "libft.h"

int	ft_iswhitespace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || \
			c == '\r' || c == '\f' || c == '\v')
		return (1);
	else
		return (0);
}
