#include<iostream>
#include<cstdio>
using namespace std;

int main(){

    freopen("in.txt","r",stdin);

    int T,N,i,j,kase = 0;

    scanf("%d",&T);

    while(T--){

        int B=0,W=0,T=0,A=0;

        scanf("%d",&N);

        char str[11];

        scanf("%s",str);

        for(i=0; i<N; i++){

            if('B'==str[i])
                B++;

            else if('W'==str[i])
                W++;

            else if('T'==str[i])
                T++;

            else if('A'==str[i])
                A++;

        }

        if(B+A==N && B!=0)
            printf("Case %d: BANGLAWASH\n",++kase);

        else if(W+A==N && W!=0)
            printf("Case %d: WHITEWASH\n",++kase);

        else if(A==N)
            printf("Case %d: ABANDONED\n",++kase);

        else if(B>W)
            printf("Case %d: BANGLADESH %d - %d\n",++kase,B,W);

        else if(W>B)
            printf("Case %d: WWW %d - %d\n",++kase,W,B);

        else if(B==W)
            printf("Case %d: DRAW %d %d\n",++kase,B,T);


    }

    return 0;

}
