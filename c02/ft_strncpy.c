#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char dest[10];
	ft_strncpy(dest, "ffingumac!", 4);
	printf("%s", dest);	
}