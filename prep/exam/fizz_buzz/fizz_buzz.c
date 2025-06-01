#include<unistd.h>

void ft_putnbr(int nbr)
{
	long nb = nbr;
	int n = 1;

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
		char c = nb / n + '0';
		write(1,&c,1);
		nb = nb % n;
		n /= 10;
	}
}

void fizz_buzz()
{
	int i = 0;

	while(i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1,"fizzbuzz\n",9);
		}
		else if(i % 3 == 0)
		{
			write(1,"fizz\n",5);
		}
		else if(i % 5 == 0)
		{
			write(1,"buzz\n",5);
		}
		else
		{
			ft_putnbr(i);
			write(1,"\n",1);
		}
		i++;
	}
}

int main()
{
	fizz_buzz();
	return 0;
}
