#include <stdio.h>
char *ft_strlowcase(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if ( 64 < str[i] && str[i] < 91 )
        {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char * string;
    char tab[] = "FFINGUMAC";
    string = ft_strlowcase(tab);
	printf("%s" , string);
}