#include<stdio.h>
int fibonacci(int index, int i, int result)
{
    if (index == 0)
        return (0);
    if (index == 1)
        return (result);
    if (index > 1)
        return(fibonacci(index-1, result, result+i));
    return (-1);
}

int ft_fibonacci(int index)
{
    return (fibonacci(index, 0, 1));
}
int main(void)
{
    printf("%d", ft_fibonacci(6));
}