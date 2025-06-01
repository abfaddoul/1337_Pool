int ft_strlen(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i = 0;

	int ls = ft_strlen(src);

	if(size == 0)
	{
		return (ls);
	}
	else
	{
		while(i < size -1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ls);
}
