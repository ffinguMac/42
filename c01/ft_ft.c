#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

void main()
{
    int a;
    int *n;
    a = 1;
    n = &a;
    ft_ft(n);
    printf("%d", a);
}