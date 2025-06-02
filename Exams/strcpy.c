char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
#include<stdio.h>
int main()
{
	char src[] = "hello";
	char dest[5];
	ft_strcpy(dest,src);
	printf("%s",dest);
	return 0;
}
