#include <stdio.h>

int main()
{
  int n, i = 0, j = 0, k = 0;
  printf("enter the size of array: ");
  scanf("%d", &n);
  int a[n][n];
  int b[n][n];
  int result[n][n];

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("enter the element of array: ");
      scanf("%d", &a[i][j]);
    }
  }

  // matrix A
  printf("Matrix A is: \n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d", a[i][j]);
    }
    printf("\n");
  }
  // matrix B
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("enter the elements of array: ");
      scanf("%d", &b[i][j]);
    }
  }

  printf("Matrix B is: \n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d", b[i][j]);
    }
    printf("\n");
  }
  // result matrix 0

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      result[i][j] = 0;
      for (k = 0; k < n; k++)
      {
        result[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }
}