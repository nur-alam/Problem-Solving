#include<stdio.h>

int arr[100];

// fibonacci with recursion
int fibo(int n){
    if(n==0 || n==1) return 1;
    //printf("%d ",n);
    return fibo(n-1) + fibo(n-2);
}
// fibonacci with dynamic programming
int dynamo_fibo(int n){
    if(n==0 || n==1) return 1;
    else if(arr[n] == 0)
      arr[n] = dynamo_fibo(n-1) + dynamo_fibo(n-2);
    return arr[n];
}

int main(){
    printf("%d",fibo(5));
    return 0;
}
