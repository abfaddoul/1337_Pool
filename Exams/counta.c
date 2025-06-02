#include<unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
int main (int argc,char **argv)
{	int i;
	int j;
	i= 0;
       j= '0';
	     if (argc == 2)
	     {  
	while(argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
		{
			j++;
			
		}
		i++;
		}
	ft_putchar(j);
	     }
	     write (1,"\n",1);
	     return 0;
}
