#include<unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putnbr(int nbr)
{
	int n = 1;
	long nb = nbr;
	char c;

	if (nb < 0)
	{
		write(1,"-",1);
		nb = -nb;
	}

	while(nb / n > 9)
	{
		n *= 10;
	}

	while(n > 0)
	{
		c = nb / n + '0';
		write(1,&c,1);
		nb %= n;
		n /= 10;
	}
}

int	is_safe(int board[10], int col, int row)
{
	int i = 0;

	while(i < col)
	{
		if(board[i] == row || (board[i] - i) == (row - col)
				|| (board[i] + i) == (col + row))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
void	print(int board[10])
{
	int i = 0;

	while(i < 10)
	{
		ft_putnbr(board[i]);
		i++;
	}
	ft_putchar('\n');
}

void	solve(int board[10], int col, int *count)
{
	int row = 0;

	if (col == 10)
	{
		print(board);
		(*count)++;
		return;
	}	

	while(row < 10)
	{
		if(is_safe(board, col, row) == 1)
		{
			board[col] = row;
			solve(board, col + 1, count);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int board[10];
	int i = 0;
	int count = 0;

	while(i < 10)
	{
		board[i] = -1;
		i++;
	}

	solve(board, 0, &count);
	
	return (count);
}

int main()
{
	int total = ft_ten_queens_puzzle();

	ft_putnbr(total);

	return 0;
}
