#include "libft.h"

long	ft_atol(const char *str)
{
	long	result;
	int	sign;

	sign = 1;
	result = 0;
	while (ft_iswhitespace(*str))
		str++;
	if (ft_issign(*str))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (ft_isdigit(*str))
		result *= 10 + (*str++ - '0');
	return (result * sign);
}
