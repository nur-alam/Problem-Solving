#include<cstdio>
using namespace std;
int main(){
    int n,k,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            scanf("%d",&k);
            if((k%2)==0){
                printf("even\n");
            }
            else
                printf("odd\n");
        }
    return 0;
}
