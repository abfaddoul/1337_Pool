#include<unistd.h>
void ft_putchar(char c)
{
        write(1,&c,1);
}
void print_solution(int board[4])
{
        int i = 0;

        while(i < 4)
        {
                ft_putchar(board[i] + '0');
                i++;
        }
        ft_putchar('\n');
}
int is_safe(int board[4], int row, int col)
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
void solve(int board[4], int col, int *count)
{
	int row = 0;

	if(col == 4)
	{
		print_solution(board);
		(*count)++;
		return ;
	}
	while(row < 4)
	{
		if(is_safe(board,row,col) == 1)
		{
			board[col] = row;
			solve(board, col + 1, count);
		}
		row++;
	}
}

int ft_four_queens_puzzle(void)
{
	int board[4];
	int count = 0;
	int i = 0;

	while(i < 4)
	{
		board[i] = -1;
		i++;
	}

	solve(board, 0 ,&count);

	return (count);
}

void	ft_putnbr(int nbr)
{
	long nb = nbr;
	int n = 1;
	char c;

	if (nb < 0)
	{
		write(1,"-",1);
		nb = -nb;
	}

	while(nb/n > 9)
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

int main()
{
	int total = ft_four_queens_puzzle();
	ft_putnbr(total);
	return 0;
}
