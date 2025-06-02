#include <unistd.h>
void ftputstr(char *str)
{
	int i;
	i=0;
		while (str[i] != '\0')
		{
			write(1,&str[i],1);	
			i++;
		}
}
int main()
{
	char str[] = "hello";
	ftputstr(str);
	return 0;
}
