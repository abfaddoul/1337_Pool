#include<stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i = 0;

	int diff = max - min;

	if (diff <= 0)
	{
		*range = NULL;

		return (0);
	}

	*range = malloc(diff * sizeof(int));

	if(*range == NULL)
	{
		return (-1);
	}

	while(i < diff)
	{
		(*range)[i] = min + i;
		i++;
	}

	return (diff);
	
}

#include<stdio.h>

int main()
{
	int min = 3;
	int max = 7;
	int i = 0;

	int *range1;
	int **range = &range1;

	int retval = ft_ultimate_range(range, min , max);

	while(i < max - min)
	{
		printf("%d ",(*range)[i]);
		i++;
	}
	printf("\n");

	printf("returned value : %d \n", retval);

	free(*range);

	return 0;
}
