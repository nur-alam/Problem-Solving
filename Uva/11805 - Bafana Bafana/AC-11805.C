#include<stdio.h>

int main(){

    int n,k,p,a,ans,i,j;
    while(scanf("%d",&a)==1){

    for(j=1;j<=a;j++){

     scanf("%d%d%d",&n,&k,&p);

     ans=k+p;

     while(ans>n){
                ans=ans-n;
            }

     printf("Case %d: %d\n",j,ans);
     }

    }

    return 0;
}
