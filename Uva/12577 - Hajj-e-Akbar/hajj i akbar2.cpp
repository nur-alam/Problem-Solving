#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char s[20];
    char h[20]="HAJJ";
    int i=1,j,k,n;
    while(1){
        //scanf("%s",s);
        gets(s);
        if(strcmp(h,s)==0){
            printf("Case %d:Hajj-e-Akbar\n",i++);
            //printf("Case %d: Hajj-e-Akbar\n",i++);
        }
        else{
            printf("Case %d:Hajj-e-Asghar\n",i++);
        }

    }

    return 0;
}
