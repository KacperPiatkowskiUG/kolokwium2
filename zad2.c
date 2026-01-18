#include <stdio.h>

int recursive_series(int n)
{
    if (n <= 1) {
        return 1;
    }

    if (n % 2 == 0) {
        return recursive_series(n / 2) + 2;
    } else {
        return recursive_series(n - 1) * 3;
    }
}

int main(void)
{
    int n;

    printf("Podaj liczbe calkowita n: ");
    scanf("%d", &n);

    printf("Wynik: %d\n", recursive_series(n));

    return 0;
}