#include <stdio.h>

int Fibonacci(int n)
{
  if (n == 1)
    return 0;
  else if (n == 2)
    return 1;
  else
    return (Fibonacci(n-1) + Fibonacci(n-2));
}

void main()
{
  int n, i, count;
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: \n");

  count = 1;
  for (i = 0; i < n; i++)
  {
    printf("%d\n", Fibonacci(count) );
    count = count + 1;
  }
}
