#include <unistd.h>

void ft_putstr(char *str)
{
    int a = 0;
    while (str[a] != '\0')
    {
        write(1, &str[a++], 1);
    }
}

void lowToUpercase(char *str)
{
    if (str[strlen(str)-1] >= 97 && str[strlen(str)-1] <= 122 )
    {
         str[strlen(str)-1] = str[strlen(str)-1] - 32;
    }
}

int main()
{
    char str[] = "bonjour";
    ft_putstr(str);
    ft_putstr("\n");
    lowToUpercase(str);
    ft_putstr(str);
    ft_putstr("\n");
}

