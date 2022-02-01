//Given a square matrix of size N*N, print the sum of upper and lower triangular elements. 
//Upper Triangle consists of elements on the diagonal and above it. The lower triangle consists of elements on the diagonal and below it.

#include <stdio.h>    
     
int main()    
{    
  int m,n, uppersum=0, lowersum=0;
  printf("Enter m : ");
  scanf("%d", &m);
  printf("Enter n : ");
  scanf("%d", &n);
  int matrix[m][n];

  for (int i=0; i<m; i++){
    for (int j=0; j<n; j++){
      printf("\nEnter [%d][%d] value - ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }    
  printf("\n");
  for (int i=0; i<m; i++){
    for (int j=0; j<n; j++){
      printf("%d ", matrix[i][j]);
    }
    printf("\n");}
  
  for (int i=0; i<m; i++){
    for (int j=0; j<=i; j++){
      lowersum+=matrix[i][j];
    }
  }
  for (int i=0; i<m; i++){
    for (int j=i; j<n ; j++){
      uppersum+=matrix[i][j];
    }
  }

  printf("\nSum of lower half of matrix = %d", lowersum);
  printf("\nSum of upper half of matrix = %d", uppersum);

  return 0;    
}
