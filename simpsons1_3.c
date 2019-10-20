#include<stdio.h>

// Function
float f(float x)
{
  return 1/(1+x);
}

// simpson's 1/3 rd rule
float Simpson(float xi, float xf, float h)
{
  /* xi is the lower limit of intigration
     xf is the upper limit of intigration
     h is small step size */

  float x[20], y[20], So, Se, I;
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

  // sum of odd and even terms
  So = 0;
  Se = 0;
  for(i=1; i<n; i++)
  {
    if(i%2==1)
      So = So + y[i];
    else
      Se = Se + y[i];
  }

  I = (h/3) * (y[0] + y[n] + 4*So + 2*Se);
  return I;
}

void main()
{
  printf("Value of integral: %f", Simpson(2, 4, 0.5));
}
