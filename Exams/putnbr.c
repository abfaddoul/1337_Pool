#include <unistd.h>
void putnbr(int nb)
{
	long a;
	int n;
	char  c;

	a = nb;
	n = 1;

	if (nb < 0)
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
int main ()
{
	int i;
	i = 0;
	while(i <= 100)
	{
		putnbr(i);
		write(1,", wa l7wa\n",10);
		i++;
	}
	write(1,"\n",1);
	return 0;
}
