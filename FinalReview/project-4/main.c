#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    printf("\n##### STUDENT USER PROFILE #####\n");
    printf("1. View Student profile.\n");
    printf("2. Calculate Average Marks.\n");
    printf("3. Print time table.\n");
    printf("4. Exit.\n");

    printf("\nEnter your choice: (1 - 4)\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Viewing Student profile......\n");
            break;
        case 2:
            printf("Calculating student average marks....\n");
            break;
        case 3:
            printf("Printing semester time table....\n");
            break;
        case 4:
            printf("exiting program....\n");
            break;
        default:
            printf("Invalid choice, try again!\n");
    }


    return 0;
}
