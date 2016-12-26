#include<cstdio>
#include<cmath>
int main(){
    int n,a,k;
    scanf("%d",&k);
    while(k--){
        scanf("%d",&n);
        a=sqrt(n);
        if(n == a*a){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }

    return 0;
}
