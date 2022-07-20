#include <stdio.h>

float function(float x)
{
    return (4*x - 3*x*x);
}

int main()
{
    float a, b, n, h, i, sum;
    printf("Enter the lower limit, upper limit and no. of intervals(space-separated) : ");
    scanf("%f %f %f", &a, &b, &n);

    h = (b - a)/n;
    sum = 0;

    for (i = 0; i < n; i++)
    {
        sum = sum + function(a + i*h) + function(a + (i+1)*h);
    }

    sum = sum*(h/2);

    printf("\nThe value of integration from %.0f to %.0f is : %.2f", a, b, sum);

    return 0;
}