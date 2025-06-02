#include<unistd.h>
void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	puthex(unsigned char c)
{
	char *hex = "0123456789abcdef";

	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}
void	ft_putstr_non_printable(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] <= 31 || str[i] == 127)
		{
			puthex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}

		i++;
	}
}
