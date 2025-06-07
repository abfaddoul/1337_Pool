#include<stdlib.h>

int	ft_invalid(char *base)
{
	int i = 0;
	int j = 0;

	if(!base[0] || !base[1])
	{
		return (0);
	}

	while(base[i])
	{
		if(base[i] == '-' || base[i] == '+')
		{
			return (0);
		}
		i++;
	}

	i = 0;

	while(base[i])
	{
		j = i + 1;
		while(base[j])
		{
			if(base[i] == base[j])
			{
				return 0;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *base)
{
	int i = 0;

	while(base[i])
	{
		i++;
	}

	return i;
}

int	nbr_len(int nbr,int base_len)
{
	int len = 0;
	long nb = nbr;

	if (nb < 0)
	{
		len++;
	}

	if(nb == 0)
	{
		return 1;
	}

	while(nb != 0)
	{
		nb /= base_len;
		len++;
	}

	return len;
}

char	*ft_itoi_base(int nbr, char *base)
{
	int base_len = ft_strlen(base);
	int len = nbr_len(nbr, base_len);
	long nb = nbr;
	char *res = malloc((len  + 1) * sizeof(char));
	if(res == NULL)
	{
		return (NULL);
	}

	int neg = 0;

	if(nb < 0)
	{
		neg = 1;
		nb = - nb;
	}

	res[len] = '\0';


	while(len > neg)
	{
		res[len - 1] = base[nb % base_len];
		nb /= base_len;
		len--;
	}

	if(neg)
	{
		res[0] = '-';
	}

	return (res);
}

int    ft_base(char *str, char *base, int sign, int i)
{
	int result = 0;
	int index;
	int j;
	int len = 0;

	while(base[len])
	{
		len++;
	}

	while(str[i])
	{
		index = -1;
		j = 0;

		while(base[j])
		{
			if(str[i] == base[j])
			{
				index = j;
				break;
			}
			j++;
		}
		if(index == -1)
		{
			break;
		}
		result = result * len + index;
		i++;
	}
	return (result * sign);
}

int ft_atoi_base(char *str, char *base)
{
	int i = 0;
	int sign = 1;

	if(ft_invalid(base) == 0)
	{
		return (0);
	}
	while(str[i] <= 32)
	{
		i++;
	}

	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	return (ft_base(str, base, sign, i));
}
