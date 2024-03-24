#include <stdio.h>
#include <stdlib.h>

/*int x = 1234;
double y = 1.234567;

void function_1(int x, double y)
{
    printf("From function_1:\n x=%d, y=%f\n", x, y);
}

int main()
{
    int x = 4321;

    function_1(x, y);
    printf("Within the main block:\n x=%d, y=%f\n", x, y);

    {
        double y = 7.654321;
        function_1(x, y);
        printf("Within the nested block:\n x=%d, y=%f", x, y);
    }
    return 0;
}*/


int main()
{
    int i;

    for (i = 0; i < 5; i++){
        int x = 0;
        static int y = 0;
        printf("x = %d, y = %d\n", x++ , y++);
    }
}
