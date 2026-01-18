#include <stdio.h>

void grid_update(const int src[5][5], int dest[5][5])
{
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int sum = 0;

            if (i > 0) sum += src[i-1][j];
            if (i < 4) sum += src[i+1][j];
            if (j > 0) sum += src[i][j-1];
            if (j < 4) sum += src[i][j+1];

            if (src[i][j] > sum) dest[i][j] = 2;
            else if (src[i][j] == sum) dest[i][j] = 1;
            else dest[i][j] = 0;
        }
    }
}

int main(void)
{
    int src[5][5] = {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {1, 1, 1, 1, 1},
        {2, 2, 2, 2, 2},
        {5, 4, 3, 2, 1}
    };
    
    int dest[5][5] = {0};

    grid_update(src, dest);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", dest[i][j]);
        }
        printf("\n");
    }

    return 0;
}
