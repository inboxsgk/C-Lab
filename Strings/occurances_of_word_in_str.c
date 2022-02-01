//Write a program to find the number of times a given word 'the' appears in the given string “Best brain of the nation may be found in the last benches of the classroom”

#include <stdio.h>
#include <string.h>

int main()
{
  char str[1000], wo[1000]; int c=0;
  printf("Enter the sentence:\n");
  gets(str);

  printf("Enter word to search: ");
  scanf("%s", &wo);
  
  for (int i=0; i<strlen(str); i++){
    for (int j=0; j<strlen(wo); j++){
      if (j == (strlen(wo)-1)){
        c++;
      }else if (str[i+j] != wo[j]){
        break;
      }
    }
  }
  printf("\n%s appears %d times",wo, c);
return 0;
}
