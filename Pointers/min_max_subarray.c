//Write a C program to find the maximum and minimum of a sub-array of size m in a given array of size n, where n > m using pointers only

#include <stdio.h>
int main()
{
  int n, m;
  printf("How many numbers do you want to enter: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements: \n");
  for (int i=0; i<n; i++){
    scanf("%d", &(*(arr+i)));
  }
  printf("Enter subarray size: ");
  scanf("%d", &m);
  
  for (int i=0; i<n; i++){
    int c_max = *(arr+i);
    int c_min = *(arr+i);
    printf("\nFor sub-arry %d", *(arr+i));
    if ((m+i)>n){break;}
    for (int j=1; j<m; j++){
      printf(", %d", *(arr+(i+j)));
      if (*(arr+(i+j))>c_max){
        c_max = *(arr+(i+j));
      }
      if (*(arr+(i+j))<c_min){
        c_min = *(arr+(i+j));
      }}
    printf("\nMax is %d\nMin is %d\n", c_max, c_min);
  }
  
  return 0;
}
