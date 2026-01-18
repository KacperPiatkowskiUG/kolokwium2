#include <stdio.h>

int text_processor(const char *str)
{
    int total = 0;
    int sign = 1;

    if (str == NULL) return 0;
    

    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];

        if (c >= 'A' && c <= 'Z') {
            total += 10 * sign;
        }
        else if (c >= '0' && c <= '9') {
            int digit = c - '0';
            if (digit % 2 == 0) {
                sign = 1;
            } else {
                sign = -1;
            }
        }
        else if (c == '!') {
            total = 0;
        }
    }

    return total;
}

int main(void)
{
    char str[100];
    printf("Podaj lancuch znakow: ");
    scanf("%99s", str);

    int result = text_processor(str);
    printf("Wynik: %d\n", result);
    return 0;
}
