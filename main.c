void un(char **str)
{
	str++;
	str++;
	str++;
	printf("un = %s\n",*str);
}

void deux(char *str)
{
	str ++;
	str ++;
	str ++;
	printf("deux = %s\n",str);
}

int main()
{
	char *str = "123456789";
	printf("%s\n",str);
	un(str);
	str++;
	printf("%s\n",str);
	deux(str);
	printf("%s\n",str);
}
