#include<stdio.h>

// Function
float y(float x)
{
  // Change the expressions e.g. 1/(x+1), x, x*x
  return x;
}

// Trapezoidal Integrator
float Trapezoidal(float xi, float xf, float h)
{
  /* xi is the lower limit of intigration
     xf is the upper limit of intigration
     h is small step size */

  int   n = (xf - xi)/h;
  float I = 0;

  for (int i = 0; i <= n; i++)
      I = I + y(xi + i*h);

  I = h* (I - 0.5*(y(xi) + y(xf)) );

  return I;
}

// Example
void main()
{
  printf("Value of integral: %f", Trapezoidal(0, 10, 0.01));
}
