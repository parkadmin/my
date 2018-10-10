#include <unistd.h>

void f(char c)
{
	write(1, &c, 1);
}

char ft_rotore(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 89) || (str[i] >= 97 && str[i] <= 121))
		  f(str[i] + 1);
		else if (str[i] == 90 || str[i] == 122)
			f(str[i] - 25);
		else 
		{
			f(str[i]);
		}
	i++;
	}
f('\n');
return (*str);
}

int main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc == 2)
	{
		ft_rotore(&argv[1][i]);
	}
	else
	{
		f('\n');
	}
	return (0);
}
