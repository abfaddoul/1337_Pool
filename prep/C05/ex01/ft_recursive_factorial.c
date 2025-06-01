int ft_recursive_factorial(int nb)
{
	if(nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}

#include<stdio.h>

int main()
{
	printf("%d",ft_recursive_factorial(10));
	return 0;
}
