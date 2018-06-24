// EP release constants demo

#include <stdio.h> // don't forget them std io's 

#define GRAMS_PER_POUND 454 // for the dealers out there

const int  TARGET_YEAR = 2010;

long weight_in_grams, weight_in_pounds;
int year_of_birth, age_in_2010;

int main(void)
{
    printf("Enter your weight in pounds: ");
    scanf("%d", &weight_in_pounds);
    printf("Enter your year of birth: ");
    scanf("%d", &year_of_birth);

    // do something

    weight_in_grams = weight_in_pounds * GRAMS_PER_POUND;
    age_in_2010 = TARGET_YEAR - year_of_birth;

    // dissspppp

    printf("\nYour weight in grams = %ld", weight_in_grams);
    printf("\nIn 2010 you will be %d years old\n", age_in_2010);

    return 0;
}