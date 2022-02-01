//Write a C program to merge two 2-D arrays satisfying the given conditions
//* Find the sum of element in their respective position of two matrix.
//* If the sum is even, replace the element with the reminder 0, otherwise with 1. Accordingly, build the resultant merge matrix with the element value as 1 or 0

#include <stdio.h>
int main()
{
  int m, n;
  printf("Enter m: ");
  scanf("%d", &m);
  printf("\nEnter n: ");
  scanf("%d", &n);
  
  char arr1[m][n], arr2[m][n], aout[m][n];
 
  printf("Enter elements of first array");
  for (int i=0; i<m; i++){
    for (int j=0; j<n; j++){
      printf("\n[%d][%d] - ", i, j);
      scanf("%d", &(*(*(arr1+i)+j)));
    }
  }
  printf("Enter elements of second array");
  for (int i=0; i<m; i++){
    for (int j=0; j<n; j++){
      printf("\n[%d][%d] - ", i, j);
      scanf("%d", &(*(*(arr2+i)+j)));      
    }
  }

  for (int i=0; i<m; i++){
    for (int j=0; j<n; j++){ 
      int cur = *(*(arr1+i)+j)+ *(*(arr2+i)+j);
      if ((cur%2)==0){
        *(*(aout+i)+j) = 0;
      } else {
        *(*(aout+i)+j) = 1;
      }
    }
  }
  printf("\n\nOutput matrix is\n");
  for (int i=0; i<m; i++){
    for (int j=0; j<n; j++){
      printf(" %d ", *(*(aout+i)+j));
    } printf("\n");
  }
  return 0;
}
