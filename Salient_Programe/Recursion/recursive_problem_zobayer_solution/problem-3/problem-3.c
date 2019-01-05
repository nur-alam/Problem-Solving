#include <stdio.h>
#include <stdlib.h>

void remove_odd(int i, int j, int* n, int* arr){
    if(i==*n){
      *n = j; // resize n
      return;
    }
    if(arr[i]%2==0)
      arr[j++] = arr[i];
    remove_odd(i+1,j,n,arr);
}

int main () {
  int n ,i;
  scanf("%d",&n);
  int* arr = (int *)malloc(n*sizeof(int));
  for(i=0; i<n; i++)
    scanf("%d",&arr[i]);
  remove_odd(0, 0, &n, arr);
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
  return 0;
}
