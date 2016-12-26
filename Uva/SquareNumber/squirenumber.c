#include<stdio.h>
#include<math.h>
int main(){
    int a,b,i,temp,change;
    while(scanf("%d%d",&a,&b)==2){
        int count=0;
        if(a==0 && b==0)
            break;
        if(a>b){
            change=a;
            a=b;
            b=change;
        }
        for(i=a;i<=b;i++){
            temp=sqrt(i);
            if(i==(temp*temp)){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
