#include<unistd.h>
char ft_putchar(char c)
{
	        write(1,&c,1);
}
int main (int argc, char **argv)
{
	int i;
	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] < 122 && argv[1][i] >= 97)
			{
				ft_putchar(argv[1][i] + 1);
			}
			else if (argv[1][i] >= 65 && argv[1][i] < 90)
			{
				ft_putchar(argv[1][i] + 1);
			}
			else if (argv[1][i] == 'z' || argv[1][i] == 'Z')
			{
				ft_putchar(argv[1][i] - 25);
			}
			else
			{
				ft_putchar(argv[1][i]);
			}
			i++;
			}
		}
	write(1,"\n",1);
	return 0;
}
