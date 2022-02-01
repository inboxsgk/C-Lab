//WAP to check whether two strings are anagram of each other.
//(Hint: S1 -> LISTEN; S2 -> SILENT, So S1 and S2 are anagram, also string triangle and integral are anagram to each other)

#include <stdio.h>
#include <string.h>

int main()
{   
  char S1[100], S2[100]; int iS1[100], iS2[100],x=0;
  printf("Enter first word\n");
  gets(S1);
  printf("\nEnter second word\n");
  gets(S2);
  
  for (int i=0; i<strlen(S1); i++){
    iS1[i] = S1[i];
  }
  for (int i=0; i<strlen(S2); i++){
    iS2[i] = S2[i];
  }
  for (int i = 0; i < strlen(S1); ++i){
   for (int j = i + 1; j < strlen(S1); ++j){
      if (iS1[i] > iS1[j]){
         x = iS1[i];
         iS1[i] = iS1[j];
         iS1[j] = x;
      }
   }
}
for (int i = 0; i < strlen(S2); ++i){
   for (int j = i + 1; j < strlen(S2); ++j){
      if (iS2[i] > iS2[j]){
         x = iS2[i];
         iS2[i] = iS2[j];
         iS2[j] = x;
      }
   }
}
x=0;
for(int i=0;i<strlen(S1);i++){
    if(iS1[i]!=iS2[i]){
      printf("\nNot anagram");
    } else if((iS1[i]==iS2[i]) && i == (strlen(S1)-1)){
      printf("\nIt is anagram");
    }
  }
  return 0;
}
