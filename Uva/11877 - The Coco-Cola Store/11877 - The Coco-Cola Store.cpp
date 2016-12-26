#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,k=0;
    while(scanf("%d",&n)==1)
   {
       if(n==0){break;}
       int count=0;
       while(n>=3)
       {
           n=n-3;
           count++;
           n=n+1;
       }
       if(n==2)
       {
           count++;
           printf("%d\n",count);
       }
       else
        printf("%d\n",count);
   }
    return 0;
}
