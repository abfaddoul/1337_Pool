#include<unistd.h>
void ft_putnbr(int nb)
{
	long a;
	char c;
	int n;
	n = 1;
	a = nb;
	if(a <= 0 )
	{
		write(1,"-",1);
		a = -a;
	}
	while(a / n > 9)
	{
		n *= 10;
	}
	while(n >= 1)
	{
		c = a / n + '0';
		write(1,&c,1);
		a %= n;
		n /= 10;
	}
}
int main(int argc, char **argv)
{
	int i;
	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				ft_putnbr(i);
				write(1,"\n",1)i;
				return 0;
			}
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
                              
