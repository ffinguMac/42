#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}


void main()
{
    int a;
    int *n1, **n2, ***n3, ****n4, *****n5, ******n6, *******n7, ********n8, *********n9;
    
    a = 1;
    n1 = &a;
    n2 = &n1;
    n3 = &n2;
    n4 = &n3;
    n5 = &n4;
    n6 = &n5;
    n7 = &n6;
    n8 = &n7;
    n9 = &n8;
    ft_ultimate_ft(n9);
    printf("%d", a);
}