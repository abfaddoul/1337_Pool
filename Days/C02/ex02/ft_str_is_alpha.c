int ft_str_is_alpha(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] < 65 || str[i] > 122 ||
		str[i] < 97 && str[i] > 65)
		{
			return 0;
		}

		i++;
	}
	return (1);
}
