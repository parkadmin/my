#include <unistd.h>

char *ft_ulstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			write(1,&str[i] + 32, 1);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{	
			write(1, &str[i] - 32, 1);
		}
		else
		{
	 		write(1, &str[i], 1);
	 	}
		i++;
	}
	write(1, "\n", 1);
	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	ft_ulstr(argv[1]);
	else 
	write(1, "\n", 1);
	return (0);
}


