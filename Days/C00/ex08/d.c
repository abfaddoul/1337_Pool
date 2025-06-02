#include<unistd.h>

void f(int n,int* comb, int i)
{
	while(i < n)
	{
		comb[i] = i;
		i++;
	}
}
void e(int* comb, char c, int i, int n)
{
	while(i < n)
	{
		c = comb[i] + '0';
		write(1,&c,1);
		i++;
	}
}
void d(int n)
{
	int comb[10];
	int i;
	char c;
	i = 0;
	f(n, comb, i);
	
	while(1)
	{
		i = 0;
		e(comb, c, i, n);
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
			comb[i] = comb[i - 1] + 1 ;
	}
}
int main()
{
	d(3);
	return 0;
}
