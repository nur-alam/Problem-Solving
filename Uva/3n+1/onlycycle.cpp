#include<cstdio>
int cycle(int m){
    int i=1;
    while(1){

            printf("%d ",m);
    if(m==1){
        break;
    }
        if(m%2==0){
            m=m/2;
        }
        else{
            m=3*m+1;
        }
        i++;
    }
    return i;
}
int main(){
    int m;
    scanf("%d",&m);
    int max=cycle(m);
    printf("\n%d",max);
    return 0;
}
