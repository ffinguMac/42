#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

int     main(void)
{
    int a, b, *ptr1, *ptr2;

    a = 81;
    b = 8;
    ptr1 = &a;
    ptr2 = &b;
    ft_ultimate_div_mod(ptr1, ptr2);
    printf("%d\n", a);
    printf("%d\n", b);
}