#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("#### STUDENT INFORMATION PROGRAM #####\n");
    int student_ID;
    char student_name[30];
    int student_age;
    float student_gpa;

    printf("Enter your student ID: ");
    scanf("%d", &student_ID);

    getchar();
    printf("Enter your valid name: ");
    fgets(student_name, sizeof(student_name), stdin);

    printf("Enter your age: ");
    scanf("%d", &student_age);

    printf("Enter your semester CGPA: ");
    scanf("%f", &student_gpa);

    //printing user information
    printf("\n ---STUDENT RECORDS ---\n");
    printf("Student ID: %d\n", student_ID);
    printf("Student Name: %s\n", student_name);
    printf("Student Age: %d\n", student_age);
    printf("Semester CGPA: %f\n", student_gpa);

    return 0;
}
