#include<stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main ()
{
	int a = 16;
	int b = 5;

	int *ptr1;
	int *ptr2;
	int div;
	int mod;
	ptr1 = &div;
	ptr2 = &mod;

	ft_div_mod(a, b, &div, &mod);

	printf("%d\n", *ptr1);
	printf("%d\n", *ptr2);

	return 0;
}
