#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int cnt;
    cnt = 0;
    while (*(str+cnt) != '\0')
    {
        cnt++;
    }
    return (cnt);
}

void main()
{
    char *str;
    str = "Macguffin";
    printf("%d\n", ft_strlen(str));
    
}