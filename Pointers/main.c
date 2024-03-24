#include <stdio.h>
#include <stdlib.h>

int addThree(int list[]);
int main()
{
    //pointers
    /*char c, *ptr_c;
    int x, *ptr_x;
    float y, *ptr_y;

    c = 'A';
    x = 10;
    y = 123.45;

    printf("c: address=%p content=%c\n", &c, c);
    printf("x: address=%p content=%d\n", &x, x);
    printf("y: address=%p content=%.2f\n", &y, y);

    ptr_c = &c;
    printf("ptr_c: address=%p content=%p\n", &ptr_c, &c);
    printf("*ptr_c => %c\n", *ptr_c);

    ptr_x = &x;
    printf("ptr_x: address=%p content=%p\n", &ptr_x, &x);
    printf("*ptr_x => %d\n", *ptr_x);

    ptr_y = &y;
    printf("ptr_y: address=%p content=%p\n", &ptr_y, &y);
    printf("*ptr_y => %.2f\n", *ptr_y);

    double flt_num, *ptr_d;

    flt_num = 123.45;
    ptr_d = &flt_num;
    *ptr_d = 543.21;

    printf("flt_num = %.2f\n", flt_num);

    char ch, *ptr_c;
    ch = 'A';
    ptr_c = &ch;
    *ptr_c = 66;

    printf("*ptr_c => %c", *ptr_c);*/

    /*int x, y, *ptr_x;
    x = 5;
    y = 6;
    ptr_x = &x;
    *ptr_x = x * y;
    printf("x => %d\n", x);*/

    //pointers arithmetic
    //char *ptr_ch;
   // int *ptr_int;
   // double *ptr_db, *ptr2_db;

   // ptr2_db = ptr_db - 2;
    //char
    /*printf("Current position of ptr_ch: %p\n", ptr_ch);
    printf("Current position of ptr_ch + 2: %p\n", ptr_ch + 2);
    printf("Current position of ptr_int: %p\n", ptr_int);
    printf("Current position of ptr_int + 2: %p\n", ptr_int + 2);
    printf("Current position of ptr_db: %p\n", ptr_db);
    printf("Current position of ptr_db + 2: %p\n", ptr_db + 2);*/

    //pointer difference

  //  printf("Difference between ptr_db +2 an ptr_db is: %d\n", ptr2_db - ptr_db);

   /* //accessing arrays via pointers
    char me[] = {'U','d','e','m','e','\0'};
    char *ptr_str;
    int num[] = {1,2,3,4,5};
    int *ptr_int;
    //accessing the char array
    ptr_str = me;
    printf("%s\n", ptr_str);
    printf("%c\n", ptr_str[3]);
    *(ptr_str + 3) = 'M';
    printf("%c\n", ptr_str[3]);
    printf("%s\n", ptr_str);
    //accessing the int array
    ptr_int = num;
    printf("Before, %d\n", num[3]);
    *(ptr_int + 3) = 44;
    printf("After, %d\n", num[3]);*/

    //Pointers and Functions
    //passing arrays to functions
    int sum, list[3];
    printf("Enter three numbers separated by spaces\n");
    scanf("%d%d%d", &list[0], &list[1], &list[2]);
    sum = addThree(list);
    printf("The numbers entered are: %d, %d and %d\n", list[0], list[1], list[2]);
    printf("The sum of the integers is: %d\n", sum);

    return 0;
}
/*function definition*/
int addThree(int list[])
{
    int i;
    int result = 0;

    for (i = 0; i < 3; i++)
        result += list[i];
    return result;
}
