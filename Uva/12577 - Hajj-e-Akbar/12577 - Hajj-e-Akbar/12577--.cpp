#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
string c;
int t=0;

while(1)
{
cin>>c;
if(c==”*”) break;
t++;
if(c==”Hajj”)
printf(“Case %d: Hajj-e-Akbar\n”,t);
else
printf(“Case %d: Hajj-e-Asghar\n”,t);
}
return 0;
}

