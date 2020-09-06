include <unistd.h>
include <string.h>

INCLURE LA FONCTION STRLEN

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
    int i;

    i = ft_strlen(str) - 1;
    if (str[i] >= 97 && str[i] <= 122 )
    {
         str[i] = str[i] - 32;
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

