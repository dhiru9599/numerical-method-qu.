#include <stdio.h>

int main()
{
    int n, fact = 1;
    float a[50][50], sum, u, h, u1, m;
    printf("Enter the value of 'n' : ");
    scanf("%d", &n);
    
    // taking inputs of intial value of difference table
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the value of X[%d][1] : ", i+1);
        scanf("%f", &a[i][0]);
        printf("\nEnter the value of Y[%d][2] : ", i+1);
        scanf("%f", &a[i][1]);
    }

    // creating difference table
    for (int j = 2; j <= n; j++)
    {
        for (int i = 0; i <= n - j; i++)
        {
            a[i][j] = a[i+1][j-1] - a[i][j-1];
        }
    }

    // taking the interpolating point
    printf("\nEnter the interpolating point : ");
    scanf("%f", &m);

    // calculating the output
    h = a[1][0] - a[0][0];
    u = (m - a[n-1][0])/h;
    u1 = u;
    sum = a[n-1][1];
    int j = 2;

    for (int i = n-2; i >= 0; i--)
    {
        sum = sum + (u1 * a[i][j])/fact;
        fact = fact*j;
        u1 = u1*(u+(j-1));
        j++;
    }
    printf("\nThe required value of function at the point %0.2f is : %0.3f\n", m, sum);
    return 0;
}