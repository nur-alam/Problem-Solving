#include<cstdio>
using namespace std;
int main(){
    char s[20];
    int i=1;
    while(gets(s)){
        //gets(s);
        if(s[0]=='*'){
            break;
        }
        else if(s[0]=='H' && s[1]=='a' && s[2]=='j' && s[3]=='j'){
            printf("Case %d: Hajj-e-Akbar\n",i++);

        }
        else{
            printf("Case %d: Hajj-e-Asghar\n",i++);
        }
    }

    return 0;
}
