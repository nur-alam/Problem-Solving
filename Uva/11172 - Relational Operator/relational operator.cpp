#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    long long n,a,b;
    int k;
    scanf("%d",&k);
    while(k--){
        scanf("%lld %lld",&a,&b);
            if(a<b)
                printf("<\n");
            else if(a>b)
                printf(">\n");
            else
                printf("=\n");
        }
    return 0;
}
