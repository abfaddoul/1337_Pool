#include <stdio.h>
int  ft_strln(char *str)
{
	int length;
	length = 0;
	
	while (str[length] != '\0')
	{
	length++;
	}
	return (length);
}

int main()
{
	char str[] = "salam ana smiti mohamed chariki";
	printf("%d\n",ft_strln(str));
}
