#include <stdio.h>
#define TRUE 1
#define FALSE 0

int is_uppercase(char c) 
{
    if (65 <= c && c <= 90)
        return TRUE;
    return FALSE;
}

int is_lowercase(char c) 
{
    if (97 <= c && c <= 122)
        return TRUE;
    return FALSE;
}

int is_alphabet(char c)
{
    if (is_uppercase(c) || is_lowercase(c))
        return TRUE;
    return FALSE;
}
int is_number(char c)
{
    if (48 <= c && c <= 59)
        return TRUE;
    return FALSE;
}
char *ft_strcapitalize(char *str)
{
	int state;
	int i;
	i = 0;
	state = 0;
	if (state == 0)
	{
		state = is_alphabet(str[i]) ? 1 : 3;
	}
	while(str[i] != '\0')
	{
		if (state == 1)
		{
			str[i] = is_lowercase(str[i]) ? str[i] - 32 : str[i];
			
			state = (is_alphabet(str[i+1]) || is_number(str[i+1])) ?  2 : 3;
		}
		else if (state == 2)
		{
			str[i] = is_uppercase(str[i]) ? str[i] + 32 : str[i];
			state = (is_alphabet(str[i+1]) || is_number(str[i+1])) ? 2 : 3;
		}
		else if (state ==3)
		{
			state = (is_alphabet(str[i+1]) || is_number(str[i+1])) ? 1 : 3;
		}
		i++;
	}
	return (str);
}
int main(void)
{
    char *string;
    char tab[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    string = ft_strcapitalize(tab);
	printf("%s" , string);
}