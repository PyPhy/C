#include<stdio.h>

void main()
{
  int A[10];
  int i, j, num, temp, keynum;
  int low, mid, high;

  printf("Enter the value of num: ");
  scanf("%d", &num);

  printf("Enter the elements one by one: \n");
  for (i=0; i < num; i++)
      scanf("%d", &A[i]);

  // Bubble sorting begings
  for (i=0; i< num; i++)
      for (j=0; j < (num-i-1); j++)
          if (A[j] > A[j+1])
          {
            temp   = A[j];
            A[j]   = A[j+1];
            A[j+1] = temp;
          }

  printf("Sorted array is...\n");
  for (i=0; i < num; i++)
      printf("%d ", A[i]);

  printf("\nEnter the element to be searched: ");
  scanf("%d", &keynum);

  // Binary search begings
  low = 1;
  high = num;

  do
  {
    mid = (low + high)/2;
    if (keynum < A[mid])
        high = mid - 1;
    else if (keynum > A[mid])
        low = mid + 1;
  } while( keynum != A[mid] && low <= high );

  if (keynum == A[mid])
      printf("search successful");
  else
      printf("search failed");

}
