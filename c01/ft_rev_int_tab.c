#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int tab2[size];
	int i;

	i = 0;
	while (i < size)
	{
		tab2[i] = *(tab + (size - 1 - i));
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = tab2[i];
		i++;
	}
}
int main(void)
{
	int tab[20];
	int i;
	int size;

	size = 20;
	i = 0;
	while (i < size)
	{
		tab[i] = i;
		i++;
	}
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}