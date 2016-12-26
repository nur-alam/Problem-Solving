#include<cstdio>
int cycle(int m){
    int i=1;
    while(m!=1){
        if(m%2==0){
            m=m/2;
        }
        else{
            m=m*3+1;
        }
        i++;
    }
    return i;
}
int main(){
    int m,n,i,max,temp;
    int moriginal,noriginal;
    while(scanf("%d %d",&m,&n)==2){
        moriginal=m;
        noriginal=n;
        if(m>n){
            temp=m;
            m=n;
            n=temp;
        }
        max=cycle(m);
        for(i=m+1;i<=n;i++){
            int tem=cycle(i);
            if(tem>max)
                max=tem;
        }
        printf("%d %d %d\n",moriginal,noriginal,max);

    }

    return 0;
}
