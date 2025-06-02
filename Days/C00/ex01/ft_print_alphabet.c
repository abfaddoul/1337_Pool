#include <unistd.h> 
#include <fcntl.h>

void	ft_print_alphabet(int fd)
{
	int	i;

	i = 97;
	while( i <= 122 )
	{
		write(fd,&i,1);
		i++;
	}
}
int main() 
{
	int fd = open("abdo",O_CREAT | O_WRONLY);
	ft_print_alphabet(fd);
	return 0;
}
