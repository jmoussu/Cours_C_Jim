#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int a = 0;
    while (str[a] != '\0')
    {
        write(1, &str[a++], 1);
    }
}

void ft_putnbr2(int nb) // nb = 123
{
    int mod;
    int our;

    if (nb < 0)
    {
        if (nb == -2147483648)
        {
            ft_putstr("-2147483648");
            return;
        }
        ft_putchar('-'); // on écrit le -
        nb = -nb;        // - et - ça fait + :D il nous sufit de travailler avec le nombre positif
    }
    while (nb >= 10)
    {
        mod = 1;
        our = nb;
        while (our >= 10)
        {
            our = our / 10;   // tronque dans la boucle chifre le plus a droite
            mod = mod * 10;   // On ajoute un 0 a droite du modulo autant de foi que l'on en a besoin ex = 100
        }                     //our = le chiffre (0 - 9) le plus a gauche
        ft_putchar(our + 48); // affiche le charater our + 48 (ASCII);
        nb = nb % mod;        // On tronque le chifre de gauche (on vient de l'afficher avec le modulo exacte <!!>complex)
    }
    ft_putchar(nb + 48); // Qui est maintenan a la fin de la fonction compris entre 0 et 9
}

void ft_putnbr(int nb)
{
    if (nb < 0) // condition pour les négatif
    {
        if (nb == -2147483648)
        {
            ft_putstr("-2147483648");
            return;
        }
        ft_putchar('-'); // on écrit le -
        nb = -nb;  // - et - ça fait + :D il nous sufit de travailler avec le nombre positif
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar((nb % 10) + 48);
}

int main()
{
    ft_putnbr(-987);
    ft_putchar('\n');
    ft_putnbr(-1);
    ft_putchar('\n');
    ft_putnbr(0);
    ft_putchar('\n');
    ft_putnbr(1);
    ft_putchar('\n');
    ft_putnbr(12);
    ft_putchar('\n');
    ft_putnbr(123);
    ft_putchar('\n');
    ft_putnbr(2147483647); // int MAX
    ft_putchar('\n');
    ft_putnbr(-2147483647);
    ft_putchar('\n');
    ft_putnbr(-2147483648); // int MIN
    ft_putchar('\n');
    return (0);
}

