int ft_fibonacci(int index)
{
	if(index < 0)
	{
		return (-1);
	}
	else if(index == 0)
	{
		return (0);
	}

	else if(index == 1 || index == 2)
	{
		return (1);
	}
	else
	{
		index = ft_fibonacci(index -1) + ft_fibonacci(index -2);
	}
	return (index);
}

#include<stdio.h>

int main()
{
	printf("%d",ft_fibonacci(-42));
	return 0;
}
