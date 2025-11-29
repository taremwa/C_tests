#include <stdio.h>
#include <stdlib.h>

int main()
{
     //const float required_ammount = 1500000;
    float paid;
    float required;

    printf("Course required ammount is: ");
    scanf("%f", &required);
    printf("Enter paid ammount: ");
    scanf("%f", &paid);

    if(paid == required){
        printf("\nPayment completed, Zero balance.\n");
    }else if (paid < required) {
        printf("\nThis is a partial payment.\n");
    }else {
        printf("\nyou've over paid, collect your change.\n");
    }

    return 0;
}
