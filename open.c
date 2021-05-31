#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int i = 0;
	char *str;

	str = "./flat.c";
	i = open(str, O_RDONLY);
	close(str);
	//close(i);
	printf("%d",i);
	return(0);
}
