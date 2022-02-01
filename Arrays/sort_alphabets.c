//Write a C program to sort n alphabets (both upper and lower) in an array in ascending order

#include <stdio.h>
int main()
{
   int n, x, i_arr[100]; char c_arr[100];
   printf("How many alphabets do you want to sort? :");
   scanf("%d", &n);
   printf("Enter those alphabets\n");
   for (int i=0; i<n; i++){
     scanf("%s", &c_arr[i]);
   }

   for (int i=0; i<n; i++){
     i_arr[i] = c_arr[i];
   }

  printf("\nSorted list of alphabets are: \n");
   for (int i=0; i<n; i++){
     for (int j=i+1; j<n; j++){
       if (i_arr[i]>i_arr[j]){
         x = i_arr[i];
         i_arr[i] = i_arr[j];
         i_arr[j] = x;
       }
       }
       printf("%c ", i_arr[i]);
   }
   
return 0;
}
