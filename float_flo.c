

#include <stdio.h>

int main()
{
	double fl = 12345678901234567890.123456789;
	printf("%.10f\n",fl);
	fl = 1234567890.123456;
	printf("%.10f\n",fl);
	fl = 1234567890.123456;
	fl = 10.0;
	int i;

	i = malloc(sizeof(int));
	if (!i)
		return(0);
	fl = 124567901234567890123456789012345678901234567890.123456;
	fl = 12345678901234567890123456789012345678901234567890.123456;
	printf("%.10f\n",fl);
	printf("%.10g\n",fl);
}