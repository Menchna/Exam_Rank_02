#include <unistd.h>

int	check_doubles(char	*str, char	c, int	pos)
{
	int	i = 0;

	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int	argc, char	**argv)
{
	int	i = 0;
	int	j = 0;

	if (argc == 3)
	{
		while (argv[1][j] != '\0')
		{
			i = 0;
			while (argv[2][i] != '\0')
			{
				if (argv[1][j] == argv[2][i])
				{
					if (check_doubles(argv[1], argv[1][j], j))
					{
						write (1, &argv[1][j], 1);
						break;
					}
				}
				i++;
			}
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
