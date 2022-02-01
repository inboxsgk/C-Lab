//Given a 2D matrix M of dimensions RxC. Find the maximum sum subarray in it.

#include <stdio.h>
int main()
{
  int R, C, ln, sumax;
  printf("Enter R : ");
  scanf("%d", &R);
  printf("Enter C : ");
  scanf("%d", &C);

  int mat1[R][C];

  for (int i=0; i<R; i++){for (int j=0; j<C; j++){
      printf("Enter [%d][%d] value - ", i, j);
      scanf("%d", &mat1[i][j]); }}
  
  printf("\n\nMatrix entered is \n");
  for (int i=0; i<R; i++){for (int j=0; j<C; j++){
    printf("%d ", mat1[i][j]);
  }printf("\n");}
  printf("\n\n");

  if(R<C){ln =R-1;}else{ln=C-1;}
  int a,b, s=0;
  for (int i=0; i<R; i++){
    for (int j=0; j<C; j++){
      int cur =0;
      if (a==R && b==C){break;}
      for (a=i; a<(ln+i); a++){
        if (s==1){s=0; break;}
        for (b=j; b<(ln+j); b++){
          if(b>=C){s=1; break;}
          cur+=mat1[a][b];
        }
      }
      if (cur>sumax){sumax=cur;}
    }
  }
  printf("\nMaximum sum subarray = %d", sumax);
return 0;
}
