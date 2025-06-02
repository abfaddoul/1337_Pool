char *ft_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while(dest[j] != '\0')
	{
		j++;
	}
	while(src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
