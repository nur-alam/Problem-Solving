#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
    int i=0,j;
    string s;
    while(1){
        gets(s);
        if(s=="*")
            break;
        i++;
        if(s=="Hajj"){
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else
            printf("Case %d: Hajj-e-Asghar\n");
    }
    return 0;
}
