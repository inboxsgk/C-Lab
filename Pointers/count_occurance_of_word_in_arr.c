//Write a C program to find and count occurance of a word in an array of strings

#include <stdio.h>
int main()
{
  int n;
  printf("How many words do you want to enter?\n");
  scanf("%d", &n);
  char arr[1000][1000], str2[1000]; int c=0;
  printf("Enter the words:\n");
  for (int i=0; i<n; i++){
    scanf("%s", *(arr+i));}
  printf("\nEnter the word to find count of : ");
  scanf("%s", str2);

  for (int i=0; i<n; i++){
    char *temp = *(arr+i), *t2 = str2;
    while (*temp==*t2){
      if ( *temp == '\0' || *t2 == '\0' ){
         break;}
      temp++;
      t2++;
    }
      if(*temp == '\0' && *t2 == '\0'){
      c++;}
  }

  printf("\n%s occurs %d times in the given array of strings", str2, c);
  return 0;
}
