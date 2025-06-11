#include<stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
	{
		i++;
	}

	return i;
}

void	ft_strcpy(char *dest, char *src)
{
	int i = 0;

	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i = 0;
	t_stock_str *result;

	result = malloc((ac + 1) * sizeof(t_stock_str));

	if(!result)
	{
		return (NULL);
	}

	while(i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = malloc((result[i].size + 1) * sizeof(char));
		if(!result[i].copy)
		{
			return (NULL);
		}
		ft_strcpy(result[i].copy,result[i].str);
		i++;
	}

	result[i].str = NULL;

	return (result);
}
