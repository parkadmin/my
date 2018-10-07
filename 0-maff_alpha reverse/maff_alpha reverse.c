#include <unistd.h>

int main(void)
{
	char s;
	char b;
	int i;

	i = 0;
	s = 'z';
	b = 'Y';
	while(i != 13)
	{
		write(1, &s, 1);
		write(1, &b, 1);
		s = s-2;
		b = b-2;
		i++;
	}

	return(0);
}

