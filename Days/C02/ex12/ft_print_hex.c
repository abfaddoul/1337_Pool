#include<unistd.h>
void	ft_putchar(char c)
{
	write(1,&c,1);
}
void	ft_print_hex(unsigned char c)
{
	char hex[] = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}
int main()
{
	char c = '2';
	ft_print_hex(c);
	return 0;
}
