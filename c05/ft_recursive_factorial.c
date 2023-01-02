#include<stdio.h>

int ft_factorial(int nb);

int ft_recursive_factorial(int nb)
{
    if (nb == 0)
        return (0);
    else
        return ft_factorial(nb);
}

int ft_factorial(int nb)
{
    if (nb >= 1)
        return nb * ft_factorial(nb-1);
    else
        return 1;
}

int main() 
{
    printf("%d\n", ft_recursive_factorial(0));
}