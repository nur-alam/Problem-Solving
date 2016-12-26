#include<bits/stdc++.h>

using namespace std;

int main(){

    int a[105];
    int n,x,i,cnt;
    while(scanf("%d",&n)==1){
        if(n==0) break;
        for(i=0; i<n; i++){
            scanf("%d",&x);
            a[x] = x;
             a[x]++;
        }

    }

    return 0;

}
