#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n#### STUDENT ATTENDANCE TRACKER ####\n");

    int days, attendance, present = 0;
    printf("How many days of class? ");
    scanf("%d", &days);

    for(int i = 1; i <= days; i++){
        printf("Day %d (1 = present, 0 = absent):", i);
        scanf("%d", &attendance);

        if(attendance == 1)
            present++;
    }

    printf("\nTotal days present this semester: %d\n", present);

    return 0;
}
