#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    i = 0;
    while(i < size - 1)
    {   
        j = i + 1;
        while(j < size)
        {
            if(tab[i] > tab[j])
            {
                int tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
}
int main(void)
{
	int tab[10];
	int i;

	tab[0] = 15;
	tab[1] = 7;
	tab[2] = 4;
	tab[3] = 19;
	tab[4] = 20;
	tab[5] = 8;
	tab[6] = 893;
	tab[7] = 843;
	tab[8] = 0;
	tab[9] = 69;
    ft_sort_int_tab(tab, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d: %d\n", i, tab[i]); 
		i++;
	}

}