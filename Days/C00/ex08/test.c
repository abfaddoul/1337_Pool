#include<unistd.h>
void test(int n)
{
	int i;
	int comb[10];
	i = 0;

	while (i < n)
	{
		comb[i] = i;
		i++;
	}
	while(1)
	{
		char c;
		i = 0;

		while (i < n)
		{
			c = comb[i] + '0';
			write(1,&c,1);
			i++;
		}
		if (comb[0] == 10 - n)
			break ;
		write(1,", ",2);
		i = n - 1;
		while (i >= 0 && comb[i] == 10 - (n - i))
		       i--;
		if (i < 0)
			break ;
		comb[i]++;
		while (++i < n)
			comb[i] = comb[i - 1] + 1;
	}

}
int main()
{
	test(2);
	return 0;
}
