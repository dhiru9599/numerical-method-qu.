#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (x*x*x - 5*x - 7);
}

int main()
{
    float x1 = 2, x2 = 3, x;

    for (int i=0; i<50; i++)
    {
        x = (x2*fabs(f(x1)) + x1*fabs(f(x2)))/(fabs(f(x2)) + fabs(f(x1)));
        if (f(x)*f(x1) < 0)
        {
            x2 = x;
        }
        else
        {
            x1 = x;
        }
    }

    printf("\nThe apprximate root of the function by Regula Falsi Method is : %f\n\n", x);

    return 0;
}