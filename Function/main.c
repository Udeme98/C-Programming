#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
void GetDateTime(void);

int main()
{
    printf("Before the GetDateTime() function is called.\n");
    GetDateTime();
    printf("After the GetDateTime() function is called.\n");
    return 0;
}
//GetDateTime() definition
void GetDateTime(void)
{
    time_t now;

    printf("Within GetDateTime().\n");
    time(&now);
    printf("Current date and time is: %s\n",
           asctime(localtime(&now)));
}
*/

/*int MultiTwo(int x, int y);

int main()
{
    //int x = 5, y = 5;
    //printf("The multiplication of %d and %d is: %d\n", x, y, MultiTwo(x, y));

    printf("%d", MultiTwo(4,5));
}

//MultiTwo function definition
int MultiTwo(int x, int y)
{
    return (x * y);
}
*/

/*double AddDouble(double x, ...);

int main()
{
    double d1 = 1.5;
    double d2 = 2.5;
    double d3 = 3.5;
    double d4 = 4.5;

    printf("Given an argument: %2.1f\n", d1);
    printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(1, d1));
    printf("Given an argument: %2.1f and %2.1f\n", d1, d2);
    printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(2, d1, d2));
    printf("Given an argument: %2.1f, %2.1f and %2.1f\n", d1, d2, d3);
    printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(3, d1, d2, d3));
    printf("Given an argument: %2.1f, %2.1f, %2.1f and %2.1f\n", d1, d2, d3, d4);
    printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(4, d1, d2, d3, d4));

    return (0);
}

//definition of AddDouble()
double AddDouble(double x, ...)
{
    va_list arglist;
    int i;
    double result = 0.0;

    printf("The number of argument is: %d\n", x);
    va_start (arglist, x);
    for (i = 0; i < x; i++)
        result += va_arg (arglist, double);
    va_end (arglist);

    return result;
}*/

/*void printStr(char arr[]);

int main()
{
    char arr[] = "I like C!";
    char *chptr;
    chptr = arr;

    *(chptr + 3) = 'o';
    *(chptr + 4) = 'v';

    printStr(chptr);

    return 0;
}
//definition
void printStr(char *chptr)
{
    printf("%s\n", chptr);
}*/

void show(char str[][15], int max);

int main()
{
    char str[2][15] = {"You know what,", "C is powerful."};
    char *cptr;
    cptr = str;

    show(str, 2);

    return 0;
}

//definition
void show(char str[2][15], int max)
{
    int i, j;

    for (i = 0; i < max; i++)
        //for (j = 0; j < max; j++)
        printf("%s\n", str[i]);
}
