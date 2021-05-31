#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *src)
{
	int		i;
	int		size;
	char	*c;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	c = malloc(sizeof(char) * (size + 1));
	if (c == NULL)
		return (0);
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

void test(char *str)
{
	int i = 0;

	while(i++ < 10)
		str = ft_strdup(str);
	printf("str = %s", str);
	write(1,str,strlen(str));
}

int main()
{
	test("salut");
	while(1)
		;
	return(0);
}


