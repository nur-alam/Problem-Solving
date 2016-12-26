#include<stdio.h>
int main(){
  int a[50],size,i,j=0,small,secondsmall;
  printf("Enter the size of the array: ");
  scanf("%d",&size);
  printf("Enter %d elements in to the array: ", size);
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
  for(i=0;i<size;i++){
         if(secondsmall > a[i] && j != i)
              secondsmall =a[i];
  }
  printf("smallest: %d\n", small);
  printf("Second smallest: %d", secondsmall);
  return 0;
}
