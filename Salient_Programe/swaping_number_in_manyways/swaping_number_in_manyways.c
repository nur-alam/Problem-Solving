#include <stdio.h>
#include <stdlib.h>
//https://sites.google.com/site/mukeshkmrgarg/5-different-ways-of-swapping-two-numbers
void swap1(int m , int n){
  int temp;
  temp = m;
  m = n;
  n = temp;
  printf("%d %d",m,n);
}

void swap2(int m, int n){
  m = m + n;
  n = m - n;
  m = m - n;
  printf("%d %d",m,n);
}
int* swap21(int m, int n){
  n = m + n - (m=n);
  int* arr = (int *)malloc(2*sizeof(int));
  arr[0] = m, arr[1] = n;
  return arr;
}

int* swap3(int m, int n){
  m = m * n;
  n = m / n;
  m = m / n;
  int* arr = (int *)malloc(2*sizeof(int));
  arr[0] = m,arr[1] = n;
  return arr;
}

int* swap(int m, int n){
  m = m ^ n;
  n = m ^ n;
  m = m ^ n;
  int* arr = (int *)malloc(2*sizeof(int));
  arr[0] = m , arr[1] = n;
  return arr;
}

int main () {
  int n,m;
  m = 4 , n = 2;
  int *arr = swap3(m,n);
  printf("%d %d",arr[0], arr[1]);
  return 0;
}
