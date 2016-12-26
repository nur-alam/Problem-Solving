#include<cstdio>

using namespace std;

int main(){
    int t,L,W,H,i;
    int kase=0;
    //scanf("%d",&t);

    while(scanf("%d",&t)==EOF){

        for(i=1;i<=t;i++){
                scanf("%d%d%d",&L,&W,&H);
        if(L<=20 && H<=20 && W<=20)
            {

                printf("Case %d:good\n",++kase);
            }
        else
           {
             printf("Case %d:bad \n",++kase);
           }

        }
    }
    return 0;
}
