#include<unistd.h>
void ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *str1,char *str2)
{
	int i = 0;
	while(str1[i] && str2[i])
	{
		if(str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (str1[i] - str2[i]);
} 

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	while(j < argc - 1)
	{
		i = 0;
		while(i < argc - 1)
		{
			if(ft_strcmp(argv[i],argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
			}
			i++;
		}
		j++;
	}

	i = 0;
	j = 1;

	while(j < argc)
	{
		i = 0;
		while(argv[j][i])
		{
			write(1,&argv[j][i],1);
			i++;
		}
		write(1,"\n",1);
		j++;
	}
}
