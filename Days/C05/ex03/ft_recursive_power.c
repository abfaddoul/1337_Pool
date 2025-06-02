int ft_recursive_power(int nb, int power)
{
	int n = nb;
	if(power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return 0;
	}
	else
	{
		nb = n * ft_recursive_power(nb,power - 1);
	}
	return (nb);
}

#include<stdio.h>

int main()
{
	printf("%d",ft_recursive_power(5,3));
	return 0;
}
