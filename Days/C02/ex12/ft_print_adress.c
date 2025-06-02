#include<unistd.h>
void ft_print_adress(unsigned long num)
{
	int i = 0;
	char hex[] = "0123456789abcdef";
	char buffer[16];

	if (num == 0)
	{
		write(1,"0000000000000000",16);
	}
	while(num > 0)
	{
		buffer[i] = hex[num % 16];
		num /= 16;
		i++;
	}

	while (i < 16)
	{
		write(1,"0",1);
		i++;
	}

	while(i > 0)
	{
		write(1,&buffer[i],1);
		i--;
	}
}
int main ()
{
	int x = 10;
	ft_print_adress((unsigned long)&x);
	return 0;
}
