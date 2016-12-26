#include<cstdio>
int main(){
    int a,b,i,j=1,n,k,multiple;
    scanf("%d",&k);
    while(k--){
        scanf("%d %d",&a,&b);
        if(a>=1){
        for(i=1;i<=b/2;i++){
             multiple=a*i;
            if(multiple<=b){
                    if(i==1){
                        printf("Case %d: %d ",j++,multiple);}
                    else
                        printf("%d ",multiple);
            }
            else
                break;
        }
        printf("\n");}
    }
    return 0;
}
