#include <stdio.h>

int process_number(int n)
{
    if (n < 0) {
        return -1;
    }

    while (n > 1) {
        int r = n % 3;

        if (r == 0) {
            n = n / 3;
        } else if (r == 1) {
            n = n + 5;
        } else {
            n = n - 1;
        }
    }

    return n;
}

int main(void)
{
    int n;

    printf("Podaj liczbe większą od 0: ");
    scanf("%d", &n);

    printf("Wynik: %d\n", process_number(n));

    return 0;
}
