#include<unistd.h>

int 	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int     ft_invalid(char *base)
{
        int i = 0;
        int j;
        int size = ft_strlen(base);
        while(base[i])
        {
		if(base[i] == '-' || base[i] == '+' || size <= 1)
		{
			return (0);
		}

                        j = i + 1;
                        while(base[j])
                        {
                                        if (base[i] == base[j])
                                        {
                                                        return (0);
                                        }
                                        j++;
                        }
                        i++;
        }
        return 1;
}

int    ft_base(char *str, char *base, int sign, int i)
{
    int    result;
    int    index;
    int    j;

    result = 0;
    while (str[i])
    {
        index = -1;
        j = 0;
        while (base[j])
        {
            if (str[i] == base[j])
            {
                index = j;
                break ;
            }
            j++;
        }
        if (index == -1)
            break ;
        result = result * ft_strlen(base) + index;
        i++;
    }
    return (result * sign);
}

int ft_atoi_base(char *str, char *base)
{
        int sign = 1;
    if(!ft_invalid(base))
                return (0);
    int i = 0;

    while(str[i] <= 32)
    {
	    i++;
    }

    while(str[i] == '-' || str[i] == '+')
    {
	    if(str[i] == '-')
	    {
		    sign *= -1;
	    }
            i++;
    }
    return (ft_base(str, base, sign, i));

}

#include<stdio.h>

int main()
{

        char *str = "12F";
        char *base = "0123456789ABCDEF";
	printf("%d",ft_atoi_base(str, base));
	return 0;
}
