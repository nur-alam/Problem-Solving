
#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i,j,k,n,a,b,temp;
    while(scanf("%d %d",&a,&b)==2){
       n=0;
       if(a==0 && b==0)
            break;
       for(i=a;i<=b;i++){
            k=sqrt(i);
                if(i==k*k)
                    n++;
       }
       printf("%d\n",n);
    }
    return 0;
}
/*
1 100000
254 34832
output
318
171
*/

