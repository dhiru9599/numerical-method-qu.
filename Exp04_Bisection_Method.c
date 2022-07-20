#include <stdio.h>
#include <stdlib.h>

float f(float x)
{
    return (x * x * x - x - 4);
}

int main()
{
    float a = 1, b = 2, x;

    while((b-a) > 0.0001)
    {
        x = (a + b) / 2;
        if (f(x) < 0)
        {
            a = x;
        }

        if (f(x) > 0)
        {
            b = x;
        }
        // printf("%f", x);
    }

    printf("\nThe approximate root of the function f(x) is : %f\n\n", x);

    return 0;
}