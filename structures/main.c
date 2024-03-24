#include <stdio.h>
#include <stdlib.h>


/*using pointers to structures
struct car{
            char color[5];
            int year;
            float milage;
            };
typedef struct car sc;

void DataRecieve(sc *ptr_s);

int main()
{
    sc model;

    DataRecieve(&model);

    printf("These are the information you provided\n");
    printf("Color: %s\n", model.color);
    printf("Year: %d\n", model.year);
    printf("Milage: %.2f\n", model.milage);

    return 0;
}

//function definition
void DataRecieve(sc *ptr_s)
{
    printf("What is the color of the car?\n");
    gets((*ptr_s).color);
    printf("What is the year of the car?\n");
    scanf("%d", &(*ptr_s).year);
    printf("What is the milage of the car?\n");
    scanf("%f", &(*ptr_s).milage);
}
*/
struct aboutus{
        char names[10];
        int age;
        float height;
        };

typedef struct aboutus us;

void ourinfo(us *ptr_s);

int main()
{
    us meetus[2] = {
                {"Udeme", 24, 1.70},
                {"Amy", 19, 1.65}
    };

    int i;

    for (i = 0; i < 2; i++)
    ourinfo(&meetus[i]);

    return 0;
}

//funtion definition
void ourinfo(us *ptr_s)
{
    printf("Name: %s\n", ptr_s->names);
    printf("Age: %d years\n", (*ptr_s).age);
    printf("Height: %.2fm\n\n", (*ptr_s).height);
}
