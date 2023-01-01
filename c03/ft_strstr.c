#include<stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    
    if (to_find[0] == '\0')
        return (str);
    
    while (*str != '\0')
    {
        i = 0;
        while (*(str + i) == *(to_find + i))
        {
            i++;
            if (*(to_find + i) == '\0')
                return (str);
        }
        str++;
    }
}

int main() 
{
    char *str;
    char *to_find;
    
    str = "abcdefg";
    to_find = "cde";
    printf("%s", ft_strstr(str, to_find));
}