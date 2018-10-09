#include <stdio.h>


char *ft_strcpy(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

int main()
{
	char *s1;
	char *s2;

	s1[10] = "aaaaaaa";
	s2[10] = "Hello Tolya";
	printf("%s", ft_strcpy(s1, s2));
	return(0);
}



