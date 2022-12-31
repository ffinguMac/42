#include <stdio.h>
char ft_str_is_numeric(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] < 48 || str[i] > 57))
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
    count = ft_str_is_numeric("ffingumac");
	printf("%d" , count);
}