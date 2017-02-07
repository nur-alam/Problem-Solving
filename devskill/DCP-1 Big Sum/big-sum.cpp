#include<bits/stdc++.h>
#include<stdio.h>
#include<string>

#define max 1001
using namespace std;

int main(){

    string a, b, s, res;

    while(cin >> s)
    {

        int len = s.size();
        a.clear();
        b.clear();
        bool chk = false;

        // separating string with comma(,)
        for(int i=0; i<len; i++)
        {
            if(s[i]==',')
            {
                chk = true;
                continue;
            }
            if(chk) b += s[i];
            else a += s[i];
        }

        int len_a = a.size();
        int len_b = b.size();
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        res.clear();
        //cout<< a <<" "<< b << endl;

        if(len_a > len_b)
        {
            string ss = b;
            b.clear();

            for(int i=1; i<=len_a-len_b; i++)
            {
                b += "0";
            }
            b += ss;
        }
        else
        {
            string ss = a;
            a.clear();

            for(int i=1; i<=len_b-len_a; i++)
            {
                a += "0";
            }
            a += ss;
        }
        //cout<< a <<" "<< b << endl;
        int carry = 0;

        for(int i=a.size()-1; i>=0; i--)
        {
            int t = 0;
            t += a[i]-'0';
            t += b[i]-'0';
            t += carry;
            int r = t%10; // keeping last digit
            //cout<<r<<" ";
            carry = t/10;
            res += r + '0';
        }
        if(carry) res += carry + '0';
        bool ch = true;

        for(int i=0; i<res.size(); i++)
        {
            if(chk && res[i] == '0')
            {
                continue;
            }
            cout<< res[i];
            ch = false;
        }
        if(ch) cout<< "0";
        cout<<endl;

    }

    return 0;

}
