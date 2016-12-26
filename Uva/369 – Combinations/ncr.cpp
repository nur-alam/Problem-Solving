#include<bits/stdc++.h>

using namespace std;

double ncr(int n,int r){

    double num = 1.0;

    int i,x;

    if(r>n-r){

        x = r + 1;

        r = n - r;

    }
    else
        x = n - r + 1;

    for(i=1; i<=r; i++,x++)
        num = num * (double)x/i;

    return num;

}

int main(){

    int n, r;

    while(scanf("%d%d",&n,&r)==2){

        if(n==0 && r==0)
            break;

        printf("%d things taken %d at a time is %0.lf exactly.\n",n,r,ncr(n,r));

    }

    return 0;

}
