int	ft_is_prime(int nb)
{
	int i = 2;

	if(nb == 0 || nb == 1)
	{
		return (0);
	}

	while(i < nb)
	{
		if(nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int	ft_find_next_prime(int nb)
{
	if(ft_is_prime(nb))
	{
		return (nb);
	}
	else
	{
		while(!ft_is_prime(nb))
		{
			nb++;
		}
		return (nb);
	}
}

#include<stdio.h>

int main()
{
	printf("%d",ft_find_next_prime(32));
	return 0;
}
