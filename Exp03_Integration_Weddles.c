#include <stdio.h>

float function(float x)
{
    return 1/(1 + x*x);
}

int main()
{
    float a, b, h, n = 18, i, sum;

    printf("\nEnter the lower lim & upper lim : ");
    scanf("%f %f", &a, &b);
    h = (b - a) / n;
    sum = 0;
    for (i = 0; i <= (n - 6); i = i + 6)
    {
        sum = sum + function(a + i * h) + 5 * function(a + (i + 1) * h) + function(a + (i + 2) * h) + 6 * function(a + (i + 3) * h) + function(a + (i + 4) * h) + 5 * function(a + (i + 5) * h) + function(a + (i + 6) * h);
    }
    sum = ((sum * h * 3) / 10);

    printf("Intergration Val from limit %.0f to %.0f is : %.2f \n\n", a, b, sum);

    return 0;
}