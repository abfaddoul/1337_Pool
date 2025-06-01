#include <unistd.h>

void	arraycreation(int *comb, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		comb[i] = i;
		i++;
	}
}

void	printarr(int *comb, int n, char c, int i)
{
	while (i < n)
	{
		c = comb[i] + '0';
		write(1, &c, 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[10];
	int	i;
	char	c;

	arraycreation(comb, n);
	while (1)
	{
		i = 0;
		printarr(comb, n, c, i);
		if (comb[0] == 10 - n)
			break ;
		write(1, ", ", 2);
		i = n - 1;
		while (i >= 0 && comb[i] == 10 - (n - i))
			i--;
		if (i < 0)
			break ;
		comb[i]++;
		while (++i < n)
			comb[i] = comb[i - 1] + 1;
	}
}

int main()
{
	ft_print_combn(3);
	return 0;
}
