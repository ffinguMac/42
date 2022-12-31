#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putchar_multiple(char c1, char c2, char c3)
{
	ft_putchar(c1 + 48);
	ft_putchar(c2 + 48);
	ft_putchar(c3 + 48);
	
	if (c1 != 7 || c2 != 8 || c3 != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c < 10)
			{
				ft_putchar_multiple(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

int main(void)
{
    ft_print_comb();
}