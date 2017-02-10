#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int k = 0;
        char s[1000],upper_s[1000],lower_s[1000];
        cin>>s;


        int a = 0,c = 0;
        // creating upper case and lower case string
        for(int i=0; i<strlen(s); i++)
        {
            if(isupper(s[i])){
                upper_s[c++] = s[i];
            }else{
                lower_s[a++] = s[i];
            }
        }
        upper_s[c] = '\0';
        lower_s[a] = '\0';


        //sorting upper & lower array
        sort(upper_s,upper_s+strlen(upper_s));
        sort(lower_s,lower_s+strlen(lower_s));

        int i = 0, j = 0;
        c = 0;
        for(;i<strlen(upper_s)&&j<strlen(lower_s);)
        {
            if(c%2==0)
                cout << upper_s[i++];
            else
                cout << lower_s[j++];
            c++;
        }


        while(i<strlen(upper_s)){
            cout << upper_s[i++];
        }

        while(j<strlen(lower_s)){
            cout << lower_s[j++];
        }

        cout << endl;
       // cout << upper_s << " " << lower_s << endl;

    }

    return 0;

}
