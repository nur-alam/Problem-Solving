#include<cstdio>
int main(){

    int a,b,j=0,t;int sum;
    scanf("%d",&t);
    while(t--){
            sum=0;
            scanf("%d %d",&a,&b);
            for(a=a;a<=b;a++){
                if(a%2==1)
                    sum=sum+a;
            }
            printf("Case %d: %d\n",++j,sum);
    }

    return 0;
}
