#include<stdio.h>
int main(){
    int i,n,a,b,sum;
    scanf("%d",&n);

    for(i=0;i<n;i++){
           scanf("%d %d",&a,&b);
            sum=a+b;
            printf("%d",sum);
    }

    return 0;
}

