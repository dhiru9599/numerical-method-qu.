#include <stdio.h>
#include <math.h>

float function(float x)
{
    return (exp(x) + 2*x);
}
int main()
{
    float a, b, h, n = 6, i, sum;

    printf("\nEnter the lower lim & upper lim : ");
    scanf("%f%f", &a, &b);
    h = (b - a) / n;
    sum = 0;
    for (i = 0; i <= (n - 2); i = i+2)
    {
        sum = sum + function(a + i*h) + 4*function(a + (i + 1)*h) + function(a + (i + 2)*h);
	}
    sum = sum * (h / 3);

    printf("Intergration Val from limit %.2f to %.2f is : %.2f \n\n", a, b, sum);

    return 0;
}