#include<stdio.h>
#include<stdlib.h>

int sum_poly(int i, int x, int n){
    if(n==0) return 1;
    if(i==n) return 0;
    return (int)pow(x,i) + sum_poly(i+1,x,n);
}

int main(){
    int n,x;
    scanf("%d %d",&x,&n);
    int k = sum_poly(0, x, n);
    printf("%d",k);
    printf("\n");
    return 0;
}
