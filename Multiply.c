#include<stdio.h>

void main()
{
  int p, q, r;
  printf("Enter the value of p: ");
  scanf("%d", &p);
  printf("Enter the value of q: ");
  scanf("%d", &q);
  printf("Enter the value of r: ");
  scanf("%d", &r);

  int A[p][q], B[q][r], C[p][r], i, j, k;

  // part 1
  printf("Enter array elements of A...\n");
  for(i=0; i<p; i++)
  {
    for(j=0; j<q; j++)
    {
      scanf("%d\n", &A[i][j]);
    }
  }

  printf("Enter array elements of B...\n");
  for(j=0; j<q; j++)
  {
    for(k=0; k<r; k++)
    {
      scanf("%d\n", &B[j][k]);
    }
  }

  // part 2
  printf("Array elements of A are...\n");
  for(i=0; i<p; i++)
  {
    for(j=0; j<q; j++)
    {
      printf("%d \t", A[i][j]);
    }
    printf("\n");
  }

  printf("Array elements of B are...\n");
  for(j=0; j<q; j++)
  {
    for(k=0; k<r; k++)
    {
      printf("%d \t", B[j][k]);
    }
    printf("\n");
  }

  // part 3 === Multiplication
  int sum = 0;

  for(i=0; i<p; i++)
  {
    for(k=0; k<r; k++)
    {
      for(j=0; j<q; j++)
      {
        sum = sum + A[i][j]* B[j][k];
      }
      C[i][k] = sum;
      sum = 0;
    }
  }

  printf("Array elements of C are...\n");
  for(i=0; i<p; i++)
  {
    for(k=0; k<r; k++)
    {
      printf("%d \t", C[i][k]);
    }
    printf("\n");
  }

}
