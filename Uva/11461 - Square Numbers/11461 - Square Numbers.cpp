#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,a,b,temp;
    while(scanf("%d %d",&a,&b)==2){
       n=0;
       if(a==0 && b==0)
            break;
       for(i=1;i<=b;i++){
            k=i*i;
            for(j=a;j<=b;j++){
                if(k==j)
                    n++;
            }
       }
       printf("%d\n",n);
    }
    return 0;
}
