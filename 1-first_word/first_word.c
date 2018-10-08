#include <unistd.h>
int main(int argc, char *argv[])
{
	int i;
	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			while (argv[1][i] == ' '|| argv[1][i] == '\t') 
				i++;
			if (argv[1][i] != ' '|| argv[1][i] != '\t')
				{
					while(argv[1][i] >= 33 && argv[1][i] <= 126)
				  	write(1, "argv[1][i]\n", 1);
					i++;
				}
		}
	}
	write(1, "\n", 1);
	return(0);
}

