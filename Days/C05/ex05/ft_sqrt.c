int ft_sqrt(int nb)
{
	int i = 0;

	while(i < nb/2)
	{
		if(i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

#include<stdio.h>

int main()
{
	printf("%d",ft_sqrt(12));
	return 0;
}
