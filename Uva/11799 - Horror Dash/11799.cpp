#include<bits/stdc++.h>

using namespace std;

int main(){

    int tCase,n,i,max,kase = 0;

    int ara[10000];

    scanf("%d",&tCase);

    while(tCase--){

        scanf("%d",&n);

        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }

        max = ara[0];

        for(i=0;i<n-1;i++){

            if(max<ara[i+1]){

                max = ara[i+1];

            }

        }

        printf("Case %d: %d\n",++kase,max);

    }

    return 0;

}
