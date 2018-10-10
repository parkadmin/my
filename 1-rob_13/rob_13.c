#include <unistd.h>

void ft(char c)
{
	write (1, &c, 1);
}

char ft_rob(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 77)
		{
			ft(str[i] + 13);
		}
		else if (str[i] >= 78 && str[i] <= 90)
	    {
			ft(str[i] - 13);
		}
		else if (str[i] >= 97 && str[i] <= 109) 
		{
		   	ft(str[i] + 13);
	 	}
	   	else if (str[i] >= 110  && str[i] <= 122) 
		{
			 ft(str[i] - 13);
		 }
		else 
		{
			ft(str[i]);
		}
	i++;
	}
	ft('\n');
	return (*str);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		ft_rob(&argv[1][i]);
	}
	else 
		ft('\n');
	return (0);
}
