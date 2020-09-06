#include <unistd.h>

void ft_putstr(char *str)
{
    int a = 0;
    while (str[a] != '\0')
    {
        write(1, &str[a++], 1);
    }
}

void        lowToUpercase(char *str)
{
    if (str[0] >= 97 && str[0] <= 122)
    {
        str[0] = str[0] - 32;
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
