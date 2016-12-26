#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b, maxpress, minpress;

    while(scanf("%d%d",&a,&b)==2){

        if(a==-1 && b==-1)
            break;

        maxpress = abs(abs(max(a,b)-99)+min(a,b)+1);

        minpress = abs(a - b);

        printf("%d\n",min(maxpress,minpress));

    }

    return 0;

}
