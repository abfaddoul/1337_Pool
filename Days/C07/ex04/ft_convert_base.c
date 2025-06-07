#include "ft_convert_base2.h"
#include <stdlib.h>
char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if(!ft_invalid(base_from) || !ft_invalid(base_to))
	{
		return NULL;
	}

	int nb = ft_atoi_base(nbr, base_from);
	return (ft_itoi_base(nb, base_to));
}
