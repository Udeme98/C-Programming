#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141593

int main()
{
    /*int x;

    printf("Type either A, B, or C\n");
    x = getchar();
    switch(x)
    {
    case 'A':
        printf("The numeric value of A is %d\n", 'A');
        break;
    case 'B':
         printf("The numeric value of B is %d\n", 'B');
         break;
    case 'C':
        printf("The numeric value of C is %d\n", 'C');
        break;
    default:
        printf("You did not enter the right letter. Try again!\n");
    }*/

    int c;

    printf("Enter a letter\nEnter q to exit\n");
    while(c = getchar()){
        if (c == 'q')
            break;
    }
    printf("End of loop, Bye!\n");
    return 0;
}
