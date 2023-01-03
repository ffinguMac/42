#include<stdio.h>
int ft_sqrt(int nb)
{
    int result;
    
    result = 0;
    if (nb <= 0)
        return (0);
    if (nb == 1)
        return (1);
    while (result <= nb)
    {
        if (result * result == nb)
            return (result);
        result++;
    }
    return (0);
}

int main(void)
{
    printf("%d", ft_sqrt(25));
}