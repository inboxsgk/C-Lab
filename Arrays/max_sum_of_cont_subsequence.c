//Write a C program to find the maximum sum of continuous subsequence in an array.

#include <stdio.h>
int main()
{
  int len, m_sum=0, x;
  printf("How many elements do you want to enter? : ");
  scanf("%d", &len);
  int arr[len];

  printf("Enter the numbers: \n");
  for (int i=0; i<len; i++){
    scanf("%d", &arr[i]);
  }
  
  for(int i=0; i<len;i++){
    int cur = arr[i];
    for (int j=i+1; j<len; j++){
      cur+=arr[j];
      if (cur > m_sum){
        m_sum =cur;
      }
    }
  }
printf("Maximum sum of continuous subsequence is %d", m_sum);
return 0;
}
