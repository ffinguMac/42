#include<stdio.h>
unsigned int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
        i++;
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (dest[i] && i <size)
        i++;
    while (src[j] && (i + j + 1) < size)
    {
        dest[i + j] = src[j];
        j ++;
    }
    if (i < size)
        dest[i] = '\0';
    return (i + ft_strlen(src));
}

int main(void)
{
    char dest[100] = "Ma";
    char src[100] = "guffin";
    unsigned int size;
    
    size = 5;
    printf("%s", ft_strlcat(dest, src, size));
}