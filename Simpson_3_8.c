#include<stdio.h>
//#include<conio.h>

// Function
float f(float x)
{
  return 1/(1+x);
}

// simpson's 1/3 rd rule
float Simpson38(float xi, float xf, float h)
{
  /* xi is the lower limit of intigration
     xf is the upper limit of intigration
     h is small step size */

  float x[20], y[20], S12, S3, I;
  int i;
  int n = (xf - xi)/h;

  // if n is odd convert it to an even n
  if(n%2 == 1)
    n = n + 1;

  // values of x and y
  for(i=0; i<=n; i++)
  {
    x[i] = xi + i*h;
    y[i] = f(x[i]);
  }

  // sum
  S12 = 0;
  S3  = 0;
  for(i=1; i<n; i++)
  {
    if(i%3==0)
      S3  = S3  + y[i];
    else
      S12 = S12 + y[i];
  }

  I = (3*h/8) * (y[0] + y[n] + 3*S12 + 2*S3);
  return I;
}

void main()
{
  printf("Value of integral: %f", Simpson38(2, 4, 0.2));
}
