#include<cstdio>

using namespace std;

int main(){
    int t,L,W,H,i;
    int kase=0;
    scanf("%d",&t);

    while(t--){
        scanf("%d%d%d",&L,&W,&H);
        if(L<=20 && H<=20 && W<=20)
            {
                printf("Case %d: good",++kase);
            }
        else
           {
             printf("Case %d: bad",++kase);
           }
        printf("\n");

        }
    return 0;
}
