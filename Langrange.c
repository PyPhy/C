#include<stdio.h>

void main()
{
  float sum, prod, xi = 3.0;
  float x[4] = {1,2,4,9};
  float y[4] = {5,15,20,30};
  int j, m, n = 4;

  // Loop
  sum = 0;
  for(j = 0; j < n; j++)
  {
    prod = 1;
    for(m = 0; m < n; m++)
    {
      if (m==j)
        continue;
      else
        prod = prod* ( (xi - x[m])/ (x[j] - x[m]) );
    }
    sum = sum + y[j]* prod;
  }

  printf("Value is %f \n", sum);
}
