#include <unistd.h>
#include "ft_stock_str.h"

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

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

void ft_show_tab(struct s_stock_str *par)
{
    int i = 0;
    while (par[i].str)
    {
        ft_putstr(par[i].str);
        ft_putchar('\n');
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        i++;
    }
}
