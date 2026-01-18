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
    int n = 4;
    int result = process_number(n);

    printf("Wynik: %d\n", result);
    return 0;
}
