// pre-fix and post-fix modes on unary operators

#include <stdio.h>

int a,b;

int main(void)
{
    a = b = 5;

    printf("\nPost  Pre");
    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d\n", a--, --b);

    return 0;

}