#include <stdio.h>
char *ft_strupcase(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if ( 96 < str[i] && str[i] < 123 )
        {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char * string;
    char tab[] = "ffingumac";
    string = ft_strupcase(tab);
	printf("%s" , string);
}