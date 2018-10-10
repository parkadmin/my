#include <unistd.h>

void ft(char c)
{
	write(1, &c, 1);
}


char ft_ulstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			ft(str[i] + 32);
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{	
			ft(str[i] - 32);
		}
		else
		{
	 		ft(str[i]);
	 	}
		i++;
	}
	write(1, "\n", 1);
	return (*str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_ulstr(argv[1]);
	}

	else 
	{
		write(1, "\n", 1);
	}

	return (0);
}

