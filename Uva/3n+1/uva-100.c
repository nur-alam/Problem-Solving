#include<stdio.h>

int main(){
    long long n,count=1;
    n=4;
    while(1){
        printf("%lld ",n);
        //count=count+1;
        if(n==1)
            break;
        if(n%2==1)
            n=3*n+1;
        else
            n=n/2;
            count++;
    }
   printf("\n%lld",count);

    return 0;
}
