#include<stdio.h>

void main()
{
  int A[10];
  int i, num, keynum, found = 0;

  printf("Enter the value of num: ");
  scanf("%d", &num);

  printf("Enter the elements one by one: \n");
  for (i=0; i < num; i++)
      scanf("%d", &A[i]);

  printf("Enter the element to be searched: \n");
  scanf("%d", &keynum);

  // Linear search begings
  for (i=0; i<num; i++)
      if (keynum == A[i])
      {
        found = 1;
        break;
      }

  if (found == 1)
      printf("Element is present in the array\n");
  else
      printf("Element is not present in the array\n");
}
