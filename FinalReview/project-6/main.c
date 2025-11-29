#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n### STUDENT SCORE ARRAY ###\n");
    int marks[5];
    int i;

    for(i=0; i<5; i++){
        printf("Enter course mark %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    printf("\nYour Course Marks are: \n");
    for(i=0; i<5; i++){
        printf("%d\n", marks[i]);
    }

    return 0;
}
