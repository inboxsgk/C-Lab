//WAP to remove all characters from the given string except the alphabet character and display the final string (without using the second string)
//(Hint: input: C-*O123D^&E@#S, output: CODES)

#include <stdio.h>
#include <string.h>

int main()
{
  char str[1000], int c = 0;
  printf("Enter the string\n");
  scanf("%s", &str);
  
  for (int i = 0; str[i] != '\0'; i++){
    int x = str[i];
    if (((x >= 65) && (x<=90)) || ((x >= 97) && (x<=122))){
      printf("%c", str[i]);
      c++;
    }
  }

return 0;
}
