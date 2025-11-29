#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n#### SEMESTER AVERAGE PROGRAMS ####\n");
    float course_1, course_2, course_3, course_4;
    float average;

    printf("Enter your marks for course 1: ");
    scanf("%f", &course_1);

    printf("Enter your marks for course 2: ");
    scanf("%f", &course_2);

    printf("Enter your marks for course 3: ");
    scanf("%f", &course_3);

    printf("Enter your marks for course 4: ");
    scanf("%f", &course_4);

    average = (course_1 + course_2 + course_3 + course_4) / 4;
    printf("Your Average is: %.2f", average);

    //Decision making
    if(average >= 70){
        printf("Exellent!\n");
    }else if (average >=50) {
        printf("Pass!\n");
    }else {
        printf("Fail!");
    }


    return 0;
}
