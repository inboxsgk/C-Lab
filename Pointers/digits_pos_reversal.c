//Write a C program to find the reverse of the digits of a given number using pointers only

#include <stdio.h>
int main()
{ 
  char number, *nptr;int l;
  printf("Enter a number : ");
  scanf("%s", &number);

  nptr=&number;

  for (int i=0; *(nptr+i)!='\0';i++){l=i;}

  printf("\nThe reversed digits are : ");
  nptr=&number;

  for (int i=l; i>=0; i--){
    printf("%c", *(nptr+i));
  }
  
  return 0;
}
