int ft_iterative_factorial(int nb)
{
	int r = nb;

	if (nb == 0)
	{
		return (1);
	}
	else if(nb < 0)
	{
		return (0);
	}
	while(r > 1)
	{
		nb = nb * (r - 1);
		r--;
	}
	return (nb);
}

#include<stdio.h>

int main()
{
	printf("%d",ft_iterative_factorial(7));
	return 0;
}
