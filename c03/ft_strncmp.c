#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	if (n == 0)
		return 0;
	while(s1[i] == s2[i] && s1[i] && (i < n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int main(void)
{
	char *str1;
	char *str2;

	str1 = "Macguffin";
	str2 = "Macgufin";
	printf("%d\n", ft_strncmp(str1, str2, 7));
}
