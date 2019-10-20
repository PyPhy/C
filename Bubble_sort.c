#include<stdio.h>

void main()
{
  int A[10];
  int i, j, num, temp;

  printf("Enter the value of num: ");
  scanf("%d", &num);

  printf("Enter the elements one by one: \n");
  for (i=0; i < num; i++)
      scanf("%d", &A[i]);

  // Bubble sorting begings
  for (i=0; i < num; i++)
      for (j=0; j < (num-i-1); j++)
          if (A[j] > A[j+1])
          {
            // swaping
            temp   = A[j];
            A[j]   = A[j+1];
            A[j+1] = temp;
          }

  printf("Sorted array is: \n");
  for (i=0; i < num; i++)
      printf("%d ", A[i]);
}
