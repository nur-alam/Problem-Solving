#include <stdio.h>

long fact(long x,long num,long ans){
    if(x>=ans)
        return num;
    return fact(x+num,++num,ans);
}

int main() {
    long x,y;
    while((scanf("%ld %ld",&x,&y))==2){
        long ans=fact(x,x,y);
        printf("%ld\n",ans);
    }
    return 0;
}
