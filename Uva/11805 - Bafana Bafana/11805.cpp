#include<stdio.h>

using namespace std;

int main(){

    int tcase,i,n,k,p,lastplayer;

    while(scanf("%d",&tcase)==1){

        for(i=1;i<=tcase;i++){

            scanf("%d%d%d",&n,&k,&p);
            lastplayer = k+p;

            while(lastplayer > n){
                lastplayer = lastplayer - n;
            }

            printf("case %d: %d\n",i,lastplayer);
        }

    }

    return 0;

}
