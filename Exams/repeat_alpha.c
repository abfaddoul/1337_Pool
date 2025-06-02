#include<unistd.h>
int main (int argc, char **argv)
{
	int i;
	i = 0;

	int repeat;

	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z')||(argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				{
					repeat = argv[1][i] - 'a';
				}
				else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				{
				       repeat = argv[1][i] - 'A';
				}
			while(repeat >= 0)
			{
				write(1,&argv[1][i],1);
				repeat--;
			}
			}
			else
			{
			write(1,&argv[1][i],1);
			}
			repeat = 0;
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
