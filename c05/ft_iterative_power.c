#include<stdio.h>
int ft_iterative_power(int nb, int power)
{
    int i;
    int result;

    i = 1;
    result = nb;
    if (power < 0)
        return (0);
    if (power == 1)
        return (1);
    while (i < power)
    {
        result *= nb;
        i++;
    }
    return (result);
}

int main()
{
    int nb;
    int power;
    
    nb = 3;
    power = 4;
    
    printf("%d\n", ft_iterative_power(nb, power));
}