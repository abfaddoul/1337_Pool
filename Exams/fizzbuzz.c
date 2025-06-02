#include <unistd.h>

void ft_putnbr(int nb)
{
	long a;
	char c;
	int n;

	a = nb;
	n = 1;

	if(a < 0)
	{
		write(1,"-",1);
		a = -a;
	}

	while(a / n > 9)
	{
		n = n * 10;
	}

	while(n >= 1)
	{
		c = a / n + '0';
		write(1,&c,1);
		a = a % n;
		n = n / 10;
	}
}
int main()
{
	int i;
	i = 1;
	write(1,"0\n",2);
	while(i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
		ft_putnbr(i);
		}
		write(1,"\n",1);
		i++;
	}
}
