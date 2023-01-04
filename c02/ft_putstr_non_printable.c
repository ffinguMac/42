#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ch_hexa(char i)
{
	char *tmp;

	tmp "0123456789abcdef"
	if (i >= 16)
	{
		ft_putchar(i / 16);
		ft_putchar(tmp[i % 16])
	}
	else
	{
		ft_putchar('0')
		ft_putchar(tmp[i]);
	}
}

void ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ch_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(void)
{
	char *string;
	char tab[] = "Coucou\ntu vas bien ?"
	string = ft_putstr_non_printable(tab);

	return 0;
}