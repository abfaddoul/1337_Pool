unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;

	while(dest[i] != '\0' && i < size)
	{
		i++;
	}

	k = i;

	while(src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	if(i < size)
	{
		dest[i] = '\0';
	}
	while(src[j] != '\0')
	{
		j++;
	}

	return (k + j);
}

#include<stdio.h>

int main()
{
	char dest[10] = "hello ";
	char src[] = "ahmed";
	unsigned int size = 10;
	unsigned int result = ft_strlcat(dest, src, size);

	printf("this is the dest : %s\nthis is the returned value : %d ", dest, result);

	return 0;
}
