#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str,sub;
        cin>>sub>>str;
        int sublen = sub.size();
        int strlen = str.size();

        int i=0,j=0,k=sublen-1;
        for(i=strlen-1; i>=0; i--)
        {
            if(str[i]==sub[k])
            {
                bool match = true;
                int y;
                cout << str[i] << " = " << sub[k] << " ";
                for(j=i-1,y=k-1; y>=0; j--,y--)
                {
                    if(sub[y]!=str[j])
                    {
                        match = false;
                        break;
                    }
                }
                if(match){
                    break;
                }
            }
        }
        cout<< "pattern match at " << j+2 << endl;
    }

    return 0;
}
