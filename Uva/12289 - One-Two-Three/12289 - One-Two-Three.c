//#include<bits/stdc++.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("in.txt","r",stdin);
    int tc;
    //scanf("%d",&tc);
    cin>>tc;
    while(tc--)
    {
        char s[10];
        scanf("%s",s);
        if(s.length>3)
            cout<<3<<endl;
        else{
            int count = 0;
            if( s[0]=='o' )
                count++;
            if( s[1]=='n' )
                count++;
            if( s[2]=='e' )
                count++;
            if( count>=2 )
                cout <<1<<endl;
            else
                cout<<2<<endl;
        }
    }
    return 0;
}
