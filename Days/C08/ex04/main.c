#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(int argc, char **argv)
{
	t_stock_str *result = ft_strs_to_tab(argc, argv);


	int i = 0;
	while (result[i].str)
	{
		printf("str: %s\n", result[i].str);
		printf("size: %d\n", result[i].size);
		printf("copy: %s\n", result[i].copy);
		i++;
	}

	return 0;
}
