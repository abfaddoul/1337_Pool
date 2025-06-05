#include<unistd.h>
void ft_putchar(char c)
{
        write(1,&c,1);
}
int ft_strcmp(char *s1, char *s2)
{

        int i = 0;

        while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        {
                i++;
        }
        if (s1[i] != s2[i])
        {
                return (s1[i] - s2[i]);
        }
        else
                return (0);
}

void ft_putnbr(int nbr)
{
        long nb = nbr;
        int n = 1;
        char c;

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
                c = nb / n + '0';
                write(1,&c,1);
                nb %= n;
                n /= 10;
        }
}

void    ft_puthex(unsigned int nbr)
{
        char hex[] = "0123456789ABCDEF";
        if(nbr >= 16)
        ft_puthex(nbr / 16);
        ft_putchar(hex[nbr % 16]);
}

void    ft_putbin(unsigned int nbr)
{
        char bin[] = "01";
        if(nbr >= 2)
        ft_putbin(nbr / 2);
        ft_putchar(bin[nbr % 2]);
}

void    ft_putoct(int nbr)
{
    char oct[] = "poneyvif";
    unsigned int nb;
    nb = nbr;
    
    if (nbr < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }

    if (nb >= 8)
        ft_putoct(nb / 8);

    ft_putchar(oct[nb % 8]);
}

int     ft_double(char *base)
{
        int size = 0;
        int i = 0;
        int j;

        while(base[size] != '\0')
        {
                size++;
        }

        while(i < size - 1)
        {
                        j = i + 1;
                        while(j < size)
                        {
                                        if (base[i] == base[j])
                                        {
                                                        return (0);
                                        }
                                        j++;
                        }
                        i++;
        }
        return 1;
}
int ft_invalid(char *base)
{
        if (base[0] == '\0' || base[1] == '\0')
                {
                        return (0);
                }
        int i = 0;
        while(base[i] != '\0')
        {
                if(base[i] == '-' || base[i] == '+')
                {
                        return (0);
                }
                else if(ft_double(base) == 0)
                {
                        return (0);
                }
                i++;
        }
        return 1;
}
void ft_putnbr_base(int nbr, char *base)
{
        if(ft_invalid(base) == 0)
        {
                return ;
        }
        else if(ft_strcmp(base,"0123456789") == 0)
        {
                ft_putnbr(nbr);
        }
        else if(ft_strcmp(base,"0123456789ABCDEF") == 0)
        {
                unsigned int nb = (unsigned int)nbr;
                ft_puthex(nb);
        }
        else if(ft_strcmp(base,"01") == 0)
        {
                unsigned int nb = (unsigned int)nbr;
                ft_putbin(nb);
        }
        else if (ft_strcmp(base, "poneyvif") == 0)

                ft_putoct(nbr);
}

int main()
{
        char *base = "poneyvif";
        ft_putnbr_base(986127564, base);
        return 0;
}
