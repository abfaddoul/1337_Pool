int ft_iterative_power(int nb, int power)
{
	if(power == 0)
	{
		return (1);
	}
	else if(power < 0)
	{
		return (0);
	}
	int n = nb;
	while(power > 1)
	{
		nb *= n;
		power--;
	}
	return (nb);
}

#include<stdio.h>

int main()
{
	printf("%d",ft_iterative_power(1,-1));
	return 0;
}
