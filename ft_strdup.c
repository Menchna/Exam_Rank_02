#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
char	*ft_strdup(char *str)
{
	int	i = 0;
	int	n = ft_strlen(str);
	char	*dup = malloc (sizeof(char) * n);

	if (!dup)
		return (NULL);

	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
/*
#include <stdio.h>
int main(void)
{
	char	*str = "hello";
	
	printf("%s", str);
}
*/
