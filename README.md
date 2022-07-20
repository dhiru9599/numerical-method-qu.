[20/07, 1:46 pm] Nitish Kumar Cm(Hit): #include<stdio.h>
#include<conio.h>
float f(float x)
{
	return(x*x);
}
int main()
{
	float a,b,h,n,x[20],s=0;
	int i,j;
	printf("Enter the values of a,b,n\n");
	scanf("%f %f %f", &a,&b,&n);
	h=(b-a)/n;
	for(i=0; i<=n; i++)
	{
		x[i]= a+(i*h);
	}
	for(j=0; j<n; j++)
	{
		s= s+((h/2)* (f(x[j]) + f(x[j+1])));
	}
	printf("Sum = %f", s);
	return 0;
}
[20/07, 1:46 pm] Nitish Kumar Cm(Hit): trapezoidal method
[20/07, 1:46 pm] Nitish Kumar Cm(Hit): #include<stdio.h>
#include<conio.h>
float f(float x)
{ return x*x;
}
int main()
{ float a,b,n,h,sum=0,x[20];
  int i;
  printf("Enter the values of a,b,n\n");
  scanf("%f%f%f",&a,&b,&n);
  h=(b-a)/n;
  for(i=0;i<=n;i++)
  { x[i]=a+(i*h);
  }
  for(i=0;i<=n-2;i+=2)
  { sum=sum+(h/3)*(f(x[i])+4*f(x[i+1])+f(x[i+2]));
  }
  printf("sum is %f",sum);
  return 0;
}
[20/07, 1:46 pm] Nitish Kumar Cm(Hit): simpson 1/3rd method
[20/07, 1:46 pm] Nitish Kumar Cm(Hit): #include<stdio.h>
#include<conio.h>
float f(float x)
{ return x*x;
}
int main()
{ int i;
  float a,b,n,h,sum=0,x[20];
  printf("Enter the value of a,b,n\n");
  scanf("%f%f%f",&a,&b,&n);
  h=(b-a)/n;
  for(i=0;i<=n;i++)
  { x[i]=a+(i*h);
  }
  for(i=0;i<=n-6;i+=6)
  { sum=sum+((3*h)/10)*(f(x[i])+5*f(x[i+1])+f(x[i+2])+6*f(x[i+3])+f(x[i+4])+5*f(x[i+5])+f(x[i+6]));
  }
  printf("result= %f",sum);
  return 0;
}
[20/07, 1:46 pm] Nitish Kumar Cm(Hit): Weddle method
[20/07, 1:46 pm] Nitish Kumar Cm(Hit): newton raphson method
[20/07, 1:46 pm] Nitish Kumar Cm(Hit): #include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return(3*x*x*x - 9*x*x + 8);
}
float g(float x)
{
	return(9*x*x - 18*x);
}
int main()
{
	float x0,e;
	printf("Enter the value of x0 and e\n");
	scanf("%f %f", &x0, &e);
	do
	{
		x0= x0-(f(x0)/g(x0));
	}
	while(fabs(f(x0))>e);
	printf("Result is %f", x0);
	return 0;
}
[20/07, 1:46 pm] Nitish Kumar Cm(Hit): #include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return(3*x*x*x - 9*x*x + 8);
}
int main()
{
float a,b,c,e;
printf("Enter the values of a,b,e\n");
scanf("%f %f %f", &a, &b, &e);
do
{
 c=(a+b)/2;
 if
 	(f(c)*f(a)<0)
 	{b=c;
	 }
	 else{
	 	a=c;
	 }
}
while (fabs(f(c))>e);
printf("The result is %f", c);	
return 0; 
}
[20/07, 1:46 pm] Nitish Kumar Cm(Hit): #include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return(3*x*x*x - 9*x*x + 8);
}
int main()
{
	float a,b,c,e;
	printf("Enter the values of a,b,e\n");
	scanf("%f %f %f", &a, &b, &e);
	do
	{
		c= (a*f(b)+ b*f(a))/(f(b)-f(a));
		if (f(c)* f(a)< 0)
		{
			b=c;
		}
		else
		{
			a=c;
		}
	}
	while (fabs(f(c))>e);
	printf("The result is %f",c);
	return 0;
}
[20/07, 1:46 pm] Nitish Kumar Cm(Hit): bisection method
[20/07, 1:46 pm] Nitish Kumar Cm(Hit): #include <stdio.h>
#include <conio.h>
float f(float x, float y)
{
	return(x*y);
}
int main()
{
	float x0, y0, h, xn, n, k1, k2, k3, k4, k;
	int i;
	printf("Enter the values of x0, y0, h, xn\n");
	scanf("%f %f %f %f", &x0, &y0, &h, &xn);
	n=(xn-x0)/h;
	for(i=0; i<n; i++)
	{
		k1= h*f(x0,y0);
		k2=h*f(x0+(h/2), y0+(k1/2));
		k3=h*f(x0+(h/2), y0+(k2/2));
		k4=h*f(x0+h, y0+k3);
		k=(1.0/6.0)*(k1+ 2.0*k2 + 2.0*k3 + k4);
		y0=y0+k;
		x0=x0+h;
	}
	printf("The result is %f", y0);
}
[20/07, 1:46 pm] Nitish Kumar Cm(Hit): regular falsi
[20/07, 1:46 pm] Nitish Kumar Cm(Hit): #include<stdio.h>
#include<conio.h>
int main()
{
	float s=0, a, p, x[50], y[50];
	int i,j,n;
	printf("Enter the value of a and n\n");
	scanf("%f %d", &a, &n);
	printf("Enter the values of x\n");
	for(i=0; i<n; i++)
	{
		scanf("%f", &x[i]);
	}
	printf("Enter the values of y\n");
	for(i=0; i<n; i++)
	{
		scanf("%f", &y[i]);
	}
	for(i=0; i<n; i++)
	{
		p=1;
		for(j=0; j<n; j++)
		{
			if(i!=j)
			{
				p=p*((a-x[j])/(x[i]-x[j]));
			}
		}
		s=s+(p*y[i]);
	}
	printf("Result is %f", s);
	return 0;
}
[20/07, 1:46 pm] Nitish Kumar Cm(Hit): RK method
[20/07, 1:46 pm] Nitish Kumar Cm(Hit): lagranges interpolation
