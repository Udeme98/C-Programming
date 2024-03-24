#include <stdio.h>
/*int max_of_four(int a, int b, int c, int d)
{
    if (a >= b && a >= c && a >= d){
        return (a);
    }
    if (b >= a && b >= c && b >= d){
        return (b);
    }
    if (c >= a && c >= b && c >= d){
        return (c);
    }
    if (d >= a && d >= b && d >= c){
        return (d);
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);*/

char printStr(char str[]);

main()
{
    char str[11] = "I like C!";
    printStr(str);

    return (0);

}

//function definition
char printStr(char str[])
{
    //char str[11] = "I like C!";
    int i;

    for (i = 0; i < 11; i++)
        printf("%s", str);
}
