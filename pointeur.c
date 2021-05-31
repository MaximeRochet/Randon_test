#include <stdio.h>

int main()
{
	char *str = "1 2 3 4 5 6";
	char **av; 
	av[0] = "1 2 3 4 5 6";
	int i = 3;
	printf("%s\n", str);
	printf("%s\n", str + i);
	printf("%s\n", str + i + i);
	printf("%s\n", av[0] + i);
}
