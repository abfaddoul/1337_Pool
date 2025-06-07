#include <stdio.h>
#include <stdlib.h>
#include "ft_convert_base2.h"

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main()
{
    char *base16 = "0123456789ABCDEF";
    char *base2 = "01";
    char *base10 = "0123456789";
    char *base8 = "01234567";

    char *res1 = ft_convert_base("1A", base16, base10);
    printf("1A (base16) = %s (base10)\n", res1);
    free(res1);

    char *res2 = ft_convert_base("-1101", base2, base10);
    printf("-1101 (base2) = %s (base10)\n", res2);
    free(res2);

    char *res3 = ft_convert_base("777", base8, base2);
    printf("777 (base8) = %s (base2)\n", res3);
    free(res3);

    char *res4 = ft_convert_base("123", base10, base16);
    printf("123 (base10) = %s (base16)\n", res4);
    free(res4);

    return 0;
}
