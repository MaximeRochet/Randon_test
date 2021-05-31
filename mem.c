#include <stdio.h>

int main()
{
	int i = 0;
	char *osef="osef";


	while(i < 10)
	{
		printf("%c\n%p\n",osef[i], &osef[i]);
		i++;
	}
	printf("%ld\n", (osef + 5)-(osef));
	return(0);
}
