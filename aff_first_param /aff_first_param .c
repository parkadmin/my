#include <unistd.h>

void ft_str(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	
	if (argc < 2)
	{	
	write(1,"\n", 1);
	}	
else 
	ft_str(argv[1]);
	return(0);
}

