#include<stdio.h>
#include<stdlib.h>

int isprime(int i, int sqrt, int n){
    if(n<2) return 0;
    if(i>sqrt) return 1;
    if(n%i==0) return 0;
    return isprime(i+1, sqrt, n);
}

int main(){
    int n;
    while(scanf("%d",&n)==1)
    {
        if(isprime(2,(int)sqrt(n),n) == 1)
            printf("prime\n");
        else
            printf("not prime\n");
    }
    return 0;
}
