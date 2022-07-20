#include <stdio.h>

float differential_eqn(float x, float y)
{
    return (x - y)/2;
}

int main()
{
    float x0, y0, h, xn, yn;
    int n, i = 0;

    printf("\nEnter the values of x0, y0 and h : ");
    scanf("%f %f %f", &x0, &y0, &h);

    printf("\nEnter the value of x, you want to find 'y' : ");
    scanf("%f", &xn);

    n = (int) (xn - x0)/h;
    for (i = 0; i <= n; i++)
    {
        yn = y0 + h*differential_eqn(x0, y0);
        x0 += h;
        y0 = yn;
    }

    printf("\nThe value of Y at x = %.0f is : %f\n\n",xn, yn);

    return 0;
}