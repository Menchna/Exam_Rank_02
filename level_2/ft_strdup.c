#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	int	i = 0;
	char	*dup = (char *)malloc(sizeof(*src) - 1);

	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
