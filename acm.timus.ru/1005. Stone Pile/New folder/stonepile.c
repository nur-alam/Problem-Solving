#include<stdio.h>
int main(){
  int a[50],size,i,j=0,small,secondsmall;
  int minimaldiff;
  scanf("%d",&size);
for(i=0;i<size;i++)
         scanf("%d",&a[i]);
  small=a[0];
  for(i=1;i<size;i++){
         if(small>a[i]){
               small=a[i];
               j = i;
      }
  }
  secondsmall=a[size-j-1];
  for(i=1;i<size;i++){
         if(secondsmall > a[i] && j != i)
              secondsmall =a[i];
  }
  minimaldiff=secondsmall-small;
  printf("%d",minimaldiff);
  return 0;
}

