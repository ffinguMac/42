#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    

    i = 0;
    j = 0;
    while(dest[i] != 0)
        i++;
    while(src[j] != 0)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = 0;
    return (dest);
}

int main(void)
{
    char dest[100] = "Macguffin";
    char *src;
    
    src = "sdsdsdsdsdsd";
    printf("%s", ft_strcat(dest, src));
}