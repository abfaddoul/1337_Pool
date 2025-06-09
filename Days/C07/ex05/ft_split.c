#include<stdlib.h>
int	issep(char c,char *charset)
{
	int i = 0;

	while(charset[i])
	{
		if(c == charset[i])
			return 1;
		i++;
	}
	return 0;
}

int	count_words(char *str, char *charset)
{
	int i = 0;
	int j = 0;

	while(str[i])
	{
		while(issep(str[i], charset))
		{
			i++;
		}
		
		if(str[i] && !issep(str[i], charset))
		{
			j++;
			while(str[i] && !issep(str[i], charset))
			{
				i++;
			}
		}
	}
	return (j);
}

char 	*word_dup(char *str,int start,int end)
{
	int len = end - start;
	int i = 0;

	char *result = malloc((len + 1) * sizeof(char));

	if(!result)
	{
		return NULL;
	}

	while(i < len)
	{
		result[i] = str[start + i];
		i++;
	}

	result[i] = '\0';

	return (result);
}
char 	**ft_split(char *str, char *charset)
{
	int i = 0;
	int j = 0;
	int start;
	int end;
	int count = count_words(str,charset);
	char **result = malloc((count + 1) * sizeof(char *));

	if(!result)
	{
		return (NULL);
	}

	while(str[i])
	{
		while(str[i] && issep(str[i], charset))
		{
			i++;
		}

		start = i;

		while(str[i] && !issep(str[i], charset))
		{
			i++;
		}

		if(i > start)
		{
			result[j] = word_dup(str, start, i);
			j++;
		}
	}

	result[j] = NULL;

	return (result);
	
}

#include<stdio.h>

int main()
{
	int i = 0;
	char *str = "hello,   the ,, freaking,,,world,  ";
	char *charset = ", ";

	char **split = ft_split(str, charset);

	while(split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return 0;
}
