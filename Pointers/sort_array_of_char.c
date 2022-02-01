//Write a C program to sort the given array in ascending order using pointers only Given array: a[] = A,c,2,&,%,@,t U,0,B

#include <stdio.h>
int main()
{
  char a[] = {'A','c','2','&','%','@','t','U','0','B'}, *aptr =a;
  int arr[1000], *ptr, temp;

  ptr = arr;
  for (int i=0; *(aptr+i)!='\0'; i++){
    *(ptr+i) = *(aptr+i);
  }
  ptr = arr;

  for (int i=0; a[i]!='\0'; i++){
    for (int j=i+1; a[j]!='\0'; j++){
      if (*(ptr + i) > *(ptr + j)){
        temp = *(ptr + i);
        *(ptr+i) = *(ptr+j);
        *(ptr+j) = temp;
      }
    }
  }
  ptr = arr;
  printf("The array sorted in ascending order = %c", *ptr);
  ptr++;
  for (int i=0; *(ptr+i)!='\0'; i++){
    printf(",%c", *(ptr+i));
  }
  

  return 0;
}
