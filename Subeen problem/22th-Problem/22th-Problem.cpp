#include<cstdio>
int main(){

    int i,j,k,n;
    scanf("%d",&k);
    while(k--){
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n-i;j>0;j--)
            printf(" ");
        for(j=i;j>=1;j--)
            printf("*");
        for(j=i;j>1;j--)
            printf("*");
        printf("\n");
    }
    }
    return 0;
}
