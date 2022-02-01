//Write a C program to find all patterns of 0(2+)0 in given string containing 0's and 2's
//Find total number of patterns
//Hint: Input: 02202222020
//Output: 3 
//(Since patterns are 0220, 022220, 020)

#include <stdio.h>    
     
int main()    
{    
  char arr[100]; int count=0;
  printf("Enter string: ");
  gets(arr);

  for (int i=0; arr[i]!='\0'; i++){
    int cur = arr[i];
    if (cur==48){
      count++;
    }
  }
  
  printf("\nThere are %d patterns", count-1);
  
  return 0;    
}
