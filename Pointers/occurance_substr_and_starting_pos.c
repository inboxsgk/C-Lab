//Write a C program to find the occurrence of the sub-string and its starting position in a given string

#include <stdio.h>
int main()
{ 
  char string[1000], substr[1000], *sptr, *subptr; int x = -1, occ=0;

  printf("Enter string: ");
  gets(string);
  printf("\nEnter substring: ");
  gets(substr);

  sptr = string;
  subptr = substr;
  for (int i=0; (*(sptr+i)!='\0'); i++){
    for (int j=0; ; j++){
      if (*(subptr+j)=='\0'){
        occ++;
        if (x==-1){x = i;}
        break;
      } else if (*(subptr+j)!=*(sptr+i+j)){
        break;
      }
    }
  }

  printf("The substring occurs %d time", occ);
  printf("\nStarting position is %d", x);

  return 0;
}
