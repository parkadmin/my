#include <unistd.h>

void ft(char c)
{
	write(1, &c, 1);
}

char ft_repeat(char *str)
{
	int i;
	int n;
		
	i = 0;

	while (str[i] != '\0')
	{
		while (n>= 0)
		{
			if (str[i] >= 65 && str[i] <= 90)
			{
				ft(str[i]);
				n = str[i] - 65;
				n--;
			}
			else if (str[i] >= 97 && str[i] <= 122)
			{
				ft(str[i]);
				n = str[i] - 97;
				n--;
			}
			else 
			{
				ft(str[i]);
				i++;
			}
		}
	
	}
	ft('\n');
	return (*str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat(argv[1]);
	else 
		ft('\n');
	return(0);
}
