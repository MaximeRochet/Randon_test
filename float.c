#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void fl(double nb, int prec)
{
	int i = 0;
	char c;
	int arrond;

	while((int)nb >= 1)
	{	
		nb /= 10.0;
		i++;
	}
	while (i > 0)
	{
		nb *= 10;		
		c = ((int)nb) + 48;
		write(1,&c,1);
		nb -= (int)nb;
		i--;
	}
	c = '.';
	write(1, &c ,1);
	while (prec > 0)
	{
		nb *= 10;
		c = ((int)nb) + 48;
		arrond = (int)((nb - (int)nb)*10);
		if(prec == 1 && arrond >= 5)
			c++;
		write(1,&c,1);
		nb -= (int)nb;
		prec --;
	}
}
:
int main(int ac, char **av)
{	
	double flo= 121544.92212356;
	int prec = atoi(av[1]);
	int i = 0;

	while (i++ <= prec)
	{
		fl(flo, i);
		printf("\n");
		printf("%.*f\n\n", i , flo);
	}
	printf("%.*f\n\n", 100 , flo);
	fl(flo, 100);
	

	return(0);
}
