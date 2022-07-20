#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (x*sin(x) + cos(x));
}

float f_derivative(float x)
{
    return (x*cos(x));
}

int main()
{
    float a = 1, b = 2, root;

    for (int i=0; i<50; i++)
    {
        root = b - (f(b)/f_derivative(b));
        if (f(a)*f(b) < 0)
        {
            b = root;
        }
    }
    printf("\nThe approximate root of the function by Newton Raphson Method is : %.3f\n\n", root);
    return 0;
}