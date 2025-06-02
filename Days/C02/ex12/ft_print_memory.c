#include<unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_puthex(unsigned char c)
{
	char hex[] = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void ft_putadress(unsigned long num)
{
	char hex[] = "0123456789abcdef";
	int i = 15;
	char buffer[16];

	while(i >= 0)
	{
		buffer[i] = '0';
		i--;
	}

	i = 15;

	while(num > 0)
	{
		buffer[i] = hex[num % 16];
		num /= 16;
		i--;
	}

	write(1,buffer,16);
	write(1,": ",2);
}

void *ft_print_memory(void *addr, unsigned int size)
{
	unsigned int i = 0;
	unsigned char *memory = (unsigned char *) addr;

	while ( i < size )
	{
		ft_putadress((unsigned long)(memory + i));

		unsigned int j = 0;

		while(j < 16)
		{
			if (i + j < size)
			{
				ft_puthex(memory[i + j]);
			}
			else
				write(1,"  ",2);
			if(j % 2)
			{
				write(1," ",1);
			}
			j++;
		}

		j = 0;
		while(j < 16 && i + j < size)
		{
			if(memory[i+j] <= 126 && memory[i+j] >= 32)
			{
				write(1,&memory[i+j],1);
			}
			else
				write(1,".",1);
			j++;
		}
		write(1,"\n",1);
		i += 16;
	}
	return addr;
}
