//#include <bits/stdc++.h>
#include<stdio.h>

int main()
{
   int a,b,k;
   char ch;
   scanf("%d",&k);
   while(k--)
   {
       scanf("%d",&a);
       scanf("%c",&ch);
       scanf("%d",&b);
       if(ch == '/')
            printf("%d\n",a/b);
   }
    return 0;
}

