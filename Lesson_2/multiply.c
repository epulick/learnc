// Program to multiply shit together

#include <stdio.h>

int val1, val2, val3;

int product(int x, int y);

int main(void)
{
    //Grab that first numbaaa
    printf("Enter a number between1 and 100: ");
    scanf("%d",&val1);

    //Grab that second numbaaa
    printf("Enter another number between 1 and 100: ");
    scanf("%d", &val2);

    //Calculate that ish
    val3 = product(val1, val2);
    printf("%d times %d = %d\n", val1, val2, val3);

    return 0;
}