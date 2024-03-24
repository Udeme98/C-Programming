#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //int i;
    /*char str1[] = {'U','d','e','m','e','\0'};
    char str2[] = "Udeme";
    char str3[6];*/

    /*for (i = 0; str1[i]; i++){
        printf("%c", str1[i]);
    }
    printf("\n");

    for (i = 0; str2[i]; i++){
        printf("%c", str2[i]);
    }

    printf("\nHello world!\n");*/

    //measuring string length
    //printf("The length of str1 is: %d-bytes\n", strlen(str1));
   // printf("The length of str2 is: %d-bytes", strlen(str2));

   //copying a string
   //strcpy(str3, str2);
   //printf("The content of str3 is now: %s", str3);

   //stdin n stdout
   //gets() an puts() function
   /*char yourName[6];
   printf("Enter your name\n(Press enter when done)\n");
   gets(yourName);
   printf("Your name is: );
   puts(yourName);*/

   //using scanf and %s specifiers
   /*int x;
   float y;
   char str4[6];

   printf("Enter your name:\n");
   scanf("%s", str4);
   printf("Enter your age:\n");
   scanf("%d", &x);
   printf("Enter your height:\n");
   scanf("%f", &y);

   printf("Your name is: %s\nYou are %d years old\nYour height is: %.2f m\n",str4, x, y);*/
   /*char str5[6];
   int i;
   int dest = 'a' - 'A';

   printf("Enter capital letter string:\n");
   gets(str5);
   i = 0;
   while (str5[i]){
    if ((str5[i] >= 'A') && (str5[i] <= 'Z'))
        str5[i] += dest;
    i++;
   }
   printf("The string you entered is:\n");
   puts(str5);*/

   //sums numbers
   /*int x;
   int y;
   int sum;

   printf("Enter two integers:\n");
   scanf("%d%d", &x, &y);
   sum = x + y;
   printf("The sum of %d and %d is: %d\n", x, y, sum);*/
   return 0;
}
