#include<stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;
	
	while(str[i])
	{
		i++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int i = 0;

	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

}

char	*ft_strdup(char *src)
{
	char *dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}

	ft_strcpy(dest, src);

	return (dest);
}

#include<stdio.h>

int main()
{
	char src[] = "hello the fucking world";

	char *dest = ft_strdup(src);

	printf("%s", dest);

	free(dest);
	return 0;
}
