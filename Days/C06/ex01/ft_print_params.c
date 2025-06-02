#include<unistd.h>
int main(int argc, char **argv)
{
	int j = 1;
	int i = 0;
	while(j < argc)
	{
		while(argv[j][i])
		{
			write(1,&argv[j][i],1);
			i++;
		}
		i = 0;
		write(1,"\n",1);
		j++;
	}
	return 0;
}
