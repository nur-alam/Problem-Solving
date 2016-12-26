#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    int i=0;
    char s[]="Hajj";
    char s1[]="*";
    char s2[4];
    while(gets(s2)){
            //gets(s2);
        if(s2[0]=='*'){
        //if(strcmp(s2,s1)==0){
            //return 0;
            break;
        }
        else if(strcmp(s,s2)==0){
            printf("Case %d: Hajj-e-Akbar\n",++i);
        }
        else{
            printf("Case %d: Hajj-e-Asghar\n",++i);
        }
    }
    return 0;
}
