#include<unistd.h>
void ft_putnbr(int nb)
{
	long a;
	char c;
	int n;
	a = nb;
	n = 1;
	if (a < 0 )
	{
	write (1,"-",1);
	a = -a;
	}
	while (a / n > 9 )
	{
	n = n * 10;
	}

	while (n >= 1 )
	{
	c = a / n + '0';
	write (1,&c,1);
	a = a % n;
	n = n / 10;
	}
}
int main(int argc, char **argv)
{
	int i;
	i = 0;
	int j;
	j = 0;

	if(argc == 2)
	{
	while(argv[1][i] != '\0')
	{
		if(argv[1][i] == ' ')
		{
			if(argv[1][i-1] != ' ')
			{
				j++;
			}
		}
		i++;
	}
	if(argv[1][i-1] != ' ')
	{
		j++;
	}
	ft_putnbr(j);
	}
	write(1,"\n",1);
	return 0;
}

