#include<unistd.h>

void    ft_putchar(char c)
{
        write(1,&c,1);
}

int     ft_invalid(char *base)
{
        int i = 0;
        int j = 0;

        if(!base[0] || !base[1])
        {
                return (0);
        }

        while(base[i])
        {
                if(base[i] == '-' || base[i] == '+')
                {
                        return (0);
                }
                i++;
        }

        i = 0;

        while(base[i])
        {
                j = i + 1;
                while(base[j])
                {
                        if(base[i] == base[j])
                        {
                                return 0;
                        }
                        j++;
                }
                i++;
        }
        return (1);
}

void    ft_convert(int nb,char *base)
{
        int i = 0;
        int n = 0;
        long nbr = nb;
        while(base[n])
        {
                n++;
        }

        if(nbr < 0)
        {
                write(1,"-",1);
                nbr = -nbr;
        }

        if(nbr >= n)
        {
                ft_convert(nbr / n, base);
        }
        ft_putchar(base[nbr % n]);
}

void ft_putnbr_base(int nbr, char *base)
{
        if(ft_invalid(base) == 0)
        {
                return;
        }
        else
                ft_convert(nbr, base);
}

int main()
{
	ft_putnbr_base(32,"01");
	return 0;
}
