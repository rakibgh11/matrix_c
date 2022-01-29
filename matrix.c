#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void mat(){

  int i, j;
  int row, col;
  int a[10][10], b[10][10], sum[10][10];
  printf("Enter number of rows (1 - 10) : ");
  scanf("%d", &row);
  printf("Enter number of collums (1 - 10) : ");
  scanf("%d", &col);

  for ( i = 1; i <= row; i++)
  {
      for ( j = 1; j <= col; j++)
      {
          printf("Enter entry of a%d%d: ", i, j);
          scanf("%d", &a[i][j]);
      }

  }



  for ( i = 1; i <= row; i++)
  {
      for ( j = 1; j <= col; j++)
      {
          printf("Enter entry of b%d%d: ", i, j);
          scanf("%d", &b[i][j]);
      }

  }

  for ( i = 1; i <= row; i++)
  {
      for ( j = 1; j <= col; j++)
      {
          sum[i][j] = a[i][j] + b[i][j];
      }

  }

   printf("Sum of a & b: \n");

  for ( i = 1; i <= row; i++)
  {
      for ( j = 1; j <= col; j++)
      {
          printf("%d ", sum[i][j]);
      }
      printf("\n");
  }
}
int main(){

  mat();

    return 0;
}
