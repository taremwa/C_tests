#include <stdio.h>
#include <stdlib.h>

int addNum(int a, int b){
    return a+b;
}

int main()
{
    printf("\n#### FUNCTION PROGRAM ####\n");

    int x, y, sum;

    printf("Enter First Number: ");
    scanf("%d", &x);

    printf("Enter Second Number: ");
    scanf("%d", &y);

    sum = addNum(x, y);
    printf("\nSum = %d\n", sum);

    return 0;
}

