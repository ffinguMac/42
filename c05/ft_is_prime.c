#include<stdio.h>
int ft_is_prime(int nb)
{
    int cnt;
    
    cnt = 2;
    if (nb <= 1)
        return 0;
    while (cnt <= nb / cnt)
    {
        if(nb % cnt == 0)
            return (0);
        cnt++;
    }
    return (1);
    
    
}

int main(void)
{
    printf("%d", ft_is_prime(7));
}