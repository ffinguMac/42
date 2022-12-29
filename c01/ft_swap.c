#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}


void main()
{
    int a = 3, b = 8;
    printf("%d %d\n", a, b);
    ft_swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}