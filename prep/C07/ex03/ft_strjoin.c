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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int glosize = 0;
	
	while(j < size)
	{
		glosize += ft_strlen(strs[j]) + ft_strlen(sep);
		j++;
	}

	char *str = malloc((glosize * sizeof(char)) + 1);

	if(str == NULL)
	{
		return (NULL);
	}

	if(size == 0)
	{
		str[0] = '\0';

		return (str);
	}

	j = 0;

	while(j < size)
	{
		while(strs[j][i])
		{
			str[k] = strs[j][i];
			i++;
			k++;
		}

		while(sep[l])
		{
			if(j <= size -2)
			{
				str[k] = sep[l];
				k++;
				l++;
			}
			else
				break;
		}
		l = 0;
		i = 0;
		j++;
	}

	return (str);
}

#include<stdio.h>

int main()
{
	int size = 4;
	char *strs[] = {"hello","the","fucking","world"};

	char *sep = "    ";

	char *result = ft_strjoin(size, strs, sep);

	printf("%s", result);

	free(result);

	return 0;
}
