#include<stdio.h>

int main(int args, char *argv[])
{
	int i;
	
	i = 0;
	while (i < args)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return 0;
}
