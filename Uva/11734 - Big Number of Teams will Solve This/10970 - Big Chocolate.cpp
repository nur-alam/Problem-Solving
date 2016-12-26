#include <stdio.h>

using namespace std;

int main ()
{
    //freopen("in.txt","r",stdin);

    int m; //rows
    int n; //cullums
    int cut; //amount of cutting

    while( scanf("%d%d",&m,&n) !=EOF ){

        cut = m*n;
        if( cut == 0 ){
            printf("-1\n");
        }
        else{
            printf("%d\n",cut-1);
        }

    }

    return 0;
}
