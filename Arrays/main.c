#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int arr[5][5] = {8, 3, 9, 0, 10,
                     3, 5, 17, 1, 1,
                     2, 8, 6, 23, 1,
                     15, 7, 3, 2, 9,
                     6, 14, 2, 6, 0};
    int sum = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            sum += arr[i][j];
        }
        printf("%d\n ", sum);
        sum = 0;
    }
    printf("The row sum is: %d\n", sum);
   // printf("The column sum is: %d", colSum);

    return 0;
}
