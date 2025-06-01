#include<unistd.h>
void ft_putnbr(int nb)
{
	int long nbr;
	int n;
	char c;

	nbr = nb;
	n = 1;

	if(nbr < 0)
	{
		write(1,"-",1);
		nbr = -nbr;
	}
	while(nbr / n > 9)
	{
		n *= 10;
	}
	while(n > 0)
	{
		c = (nbr / n) + '0';
		write(1,&c,1);
		nbr %= n;
		n /= 10;
	}
}
