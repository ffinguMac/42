#include<stdio.h>
int ft_iterative_factorial(int nb)
{
    int i;
    int result;
    
    i = 0;
    result = 1;
    if (nb < 0)
        return (0);
    while (++i <= nb)
        result *= i;

    return (result);
}
int main() 
{
    printf("%d\n", ft_iterative_factorial(8));
}