#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main()
{
    long m,n;
    //freopen("in.txt","r",stdin);
    while(scanf("%ld%ld",&m,&n)==2)
        printf("%ld\n",m*n-1);
    return(0);
}
