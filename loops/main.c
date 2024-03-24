#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    i = 1;
    while(i <= 3){
        printf("The start of iteration %d of the outer loop\n", i);

      int j;
        j = 1;

        do {
            printf("    Iteration %d of the inner loop\n", j);
            j++;
        }while(j <= 4);

    printf("The end of iteration %d of the outer loop\n", i);
    i++;
    }

    return 0;
}
