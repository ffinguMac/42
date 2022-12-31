#include <stdio.h>
char ft_str_is_lowercase(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] < 97 || str[i] > 122))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main(void)
{
    int count;
    count = 0;
    count = ft_str_is_lowercase("!ffingumac");
	printf("%d" , count);
}