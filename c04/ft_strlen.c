#include<stdio.h>

int ft_strlen(char *str)
{
    int cnt;
    
    cnt = 0;
    
    while(str[cnt] != '\0')
        cnt++;
    return (cnt);
}

int main(void)
{
    char *str;
    
    str = "Macguffin";
    
    printf("%d", ft_strlen(str));
}
