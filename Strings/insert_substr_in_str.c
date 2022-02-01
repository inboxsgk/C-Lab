//Write a C program to insert a substring anywhere in between the given string except in the first and last position of the string.
//Finally display the resultant string on inserting the sub-string

#include <stdio.h>
#include <string.h>

int main()
{
  char str[1000], substr[1000], temp[1000]; int i, loc;
  
  printf("Enter the string:\n");
  gets(str);

  printf("Enter the substring:\n");
  gets(substr);

  printf("Enter position: ");
  scanf("%d", &loc);
  char sndhlf[strlen(loc+str)+1];
  strcpy(sndhlf, loc+str);

  for (i=0; i<loc; i++){
    temp[i] = str[i];
  }
  for (int j=0; j<strlen(substr); j++){
    temp[(j+i)] = substr[j];
  }
  for (int j=0, le=strlen(temp); j<strlen(sndhlf); j++){
    temp[(le+j)] = sndhlf[j];
  }
  printf("\n\n%s", temp);

return 0;
}
