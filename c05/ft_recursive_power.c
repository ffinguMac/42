#include<stdio.h>
int ft_power(int nb, int power, int result);

int ft_recursive_power(int nb, int power)
{
    return (ft_power(nb, power, nb));
}
int ft_power(int nb, int power, int result)
{
    if (power == 0)
        return (1);
    if (power == 1)
        return (result);
    if (power > 1)
        return (ft_power(nb, power -1, result * nb));
}
int main()
{
    int nb;
    int power;
    
    nb = 3;
    power = 4;
    
    printf("%d\n", ft_recursive_power(nb, power));
}