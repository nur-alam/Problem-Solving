#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int a,b,c,k,i,j,n;
    scanf("%d",&n);
    for(k=1;k<=n;k++){
        scanf("%d %d %d",&a,&b,&c);
        if(a>b){
            if(a<c)
                printf("Case %d: %d %d %d\n",k,b,a,c);
            else{
                if(b<c)
                    printf("Case %d: %d %d %d\n",k,b,c,a);
                else
                    printf("Case %d: %d %d %d\n",k,c,b,a);
            }
        }
        else{
            if(b<c)
                printf("Case %d: %d %d %d\n",k,a,b,c);
            else{
                if(a>c)
                    printf("Case %d: %d %d %d\n",k,c,a,b);
                else
                    printf("Case %d: %d %d %d\n",k,a,c,b);
            }
        }

    }

    return 0;
}
