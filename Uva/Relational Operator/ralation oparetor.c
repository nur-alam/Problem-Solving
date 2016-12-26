#include<stdio.h>
int main(){
    int i,kase,n,a,b;
    scanf("%d",&n);
    while(n<=kase){
        for(i=0;i<n;i++){
            scanf("%d %d",&a,&b);
            if(a<b){
                printf("<");
            }
            else if(a>b){
                printf(">");
            }
            else(a==b){
                printf("=");
            }
        }
    }

}
