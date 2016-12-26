#include<cstdio>//hhws4ww5
int cycle(m){
    int i=1;
    if(m!=1){
        if(m%2==0){
            m=m/2;
        }
        else
            m=m*3+1;
        i++;
    }
    return i;
}
int main(){
    int m,n,i,max,temp;
    int moriginal,noriginal;
    while(scanf("%d %d",&m,&n)){
        moriginal=m;
        noriginal=n;
        if(m>n){
            temp=m;
            m=n;
            n=m;
        }
        max=cycle(m);
        printf("%d",i);

    }

    return 0;
}
