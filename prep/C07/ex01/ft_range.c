#include<stdlib.h>

int *ft_range(int min, int max)
{
	int i = 0;
	int range = max - min;

	if(range <= 0)
	{
		return (NULL);
	}

	int *arr = malloc(range * sizeof(int));

	if(arr == NULL)
	{
		return (NULL);
	}

	while(i < range)
	{
		arr[i] = min + i;
		i++;
	}

	return (arr);
}

#include<stdio.h>

int main()
{
	int i = 0;
	int min = 3;
	int max = 3;

	int *arr = ft_range(min ,max);

	if (arr == NULL)
	{
		printf("khataa2");
		return 1;
	}

	while(i < max - min)
	{
		printf("%d,", arr[i]);
		i++;
	}
	printf("\n");

	free(arr);

	return 0;
}
