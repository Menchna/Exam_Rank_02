#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int main(int	argc, char	**argv)
{
	int	n = 0;
	int	i = 0;
	int	j = 1;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			n = n * 10 + (argv[1][i] - '0');
			i++;
		}
		while (j <= 9)
		{
			ft_putnbr(j);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(j * n);
			write(1, "\n", 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
