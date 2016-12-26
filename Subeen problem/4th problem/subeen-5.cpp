#include<cstdio>
int main(){
    char s[3];
    int n,i,sum=0;
    scanf("%d",&n);
    while(n--){
           sum=0;
        for(i=0;i<3;i++){
            scanf(" %c",&s[i]);
            sum=sum+s[i];
        }
            printf("%d\n",sum);
    }
    return 0;
}
