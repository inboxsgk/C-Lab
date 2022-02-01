//Write a C program to replace multiples of 5 by a character ‘*’ and multiples of 2 by a character ‘&’ in a 2-D array

#include <stdio.h>
int main()
{
  int n;
  printf("How many numbers do you want to enter?\n");
  scanf("%d", &n);
  char arr[1000][1000];
  printf("Enter the numbers:\n");
  for (int i=0; i<n; i++){
    scanf("%s", *(arr+i));}
  
  for (int i=0; i<n; i++){
    int cno = (*(*(arr+i))-48);
    if((cno%5)==0){
      *(*(arr+i))='*';
    } else if((cno%2)==0){
      *(*(arr+i))='&';
    }
  }
  printf("\nAfter replacing the values are: ");
  for(int i=0; i<n; i++){
    printf("\n%c", *(*(arr+i)));
  }
  return 0;
}
