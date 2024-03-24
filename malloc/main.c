#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i, n, sum = 0;

    printf("Enter total number of items\n");
    scanf("%d", &n);
    printf("The number of items entered is: %d\n", n);

    ptr = (int*)malloc(n*sizeof(int));
    if (ptr == NULL)
        printf("malloc is not successful");

    /*printf("The values of the item\n");*/
    for (i = 0; i < n; i++){
        ptr[i] = i + 1;
    };

    printf("The sum of the values are:\n");
    for (i = 0; i < n; i++){
            sum += ptr[i];
        //printf("%d", sum);
    }
    printf("%d", sum);

    free(ptr);

}
