#include <stdio.h>

int main(void)
{
    int x = 34;
    int y = 50;

    printf("a is %i\n", x);
    printf("b is %i\n", y);

    // swapping...
    int temp = x;
    y = x;
    y = temp;

    printf("x is now %i\n", x);
    printf("y is now %i\n", y);
}
