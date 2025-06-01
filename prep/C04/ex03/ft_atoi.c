int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while(str[i] <= 32)
	{
		i++;
	}
	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while(str[i] >= 48 && str[i] <= 56)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
