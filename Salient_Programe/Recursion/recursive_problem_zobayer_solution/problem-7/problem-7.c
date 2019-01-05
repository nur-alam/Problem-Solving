#include<stdio.h>
#include<stdlib.h>

int fibo(int n){
   if(n<3) return 1;
   return fibo(n-2) + fibo(n-1);
}

int main(){
    int n,v;
    scanf("%d",&n);
    v = fibo(n);
    printf("%d\n",v);
    return 0;
}
