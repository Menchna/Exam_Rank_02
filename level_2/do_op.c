#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int	argc, char	**argv)
{
	int	op = argv[2][0];
	int	n1, n2;
	int	res = 0;

	if (argc == 4)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		if (op == '+')
			res = n1 + n2;
		else if (op == '-')
			res = n2 - n1;
		else if (op == '*')
			res = n1 * n2;
		else if (op == '/')
			res = n1 / n2;
		else if (op == '%')
			res = n1 % n2;
		printf ("%d\n", res);
	}
	else
		write (1, "\n", 1);
	return (0);
}
