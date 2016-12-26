#include<cstdio>
using namespace std;
int main(){
    int k,i,j,n;

    while(1)
    {
        scanf("%d",&i);
        for(j=1;j<=i;j++){
        scanf("%d",&n);
        if((n%2)==0){
            printf("even\n");
        }
        else
            printf("odd\n");
    }
    }
    return 0;
}
