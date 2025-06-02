void ft_ultimate_div_mod(int *a, int *b)
{
	int helper;

	helper = *a / *b;
	*b = *a % *b;
	*a = helper;
}
