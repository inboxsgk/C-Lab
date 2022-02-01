//Write a C program to split the given sentence into words and display the words one after the other.

#include <stdio.h>
#include <string.h>

int main()
{
  char str[1000];
  printf("Enter the sentence:\n");
  gets(str);
  
  for(int i=0; str[i]!='\0'; i++){
    printf("%c", str[i]);
    if (str[i] == ' '){
      printf("\n");
    }
  }
  
return 0;
}
