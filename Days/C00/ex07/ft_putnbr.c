#include<unistd.h>
void ft_putnbr(int nb)
{
	long n;
	char c;
	int a;

	n = nb;
	a = 1;

	if(n < 0)
	{
		write(1,"-",1);
		n = -n;
	}

	while(n / a > 9)
	{
		a *= 10;
	}

	while(a >= 1)
	{
		c = n / a + '0';
		write(1,&c,1);
		n %= a;
		a /= 10;
	}
}
