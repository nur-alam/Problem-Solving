#include<cstdio>
int main(){

    int n,sum=0;
    scanf("%d",&n);
    if(n>0){
        sum=(n*(n+1))/2;
    }
    else
    {
        sum=((n*(n-1))/2)*(-1);
        sum=sum+1;
    }
    printf("%d",sum);

    return 0;
}
