#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
    printf("%d %d", *div, *mod);
}


void main()
{
    int a, b, *d, *m, div, mod;
    a = 48;
    b = 7;
    d = &div;
    m = &mod;
    ft_div_mod(a, b, d, m);
    
}