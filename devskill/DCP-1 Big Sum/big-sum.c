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
        a.clear();b.clear();
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

        int arr[max] = {0};
        int k=0, carry=0 , i = 0 , j = 0 , res = 0;

        for(i = len_a-1, j = len_b-1; ;i--,j--)
        {
            int num1 = a[i]-'0';
            int num2 = b[i]-'0';
            if(i<0) num1 = 0;
            if(j<0) num2 = 0;
            if(i<0 && j<0) break;
            res = num1 + num2 + carry;
            arr[k++] = res % 10; // keeping last digit
            carry = res / 10; // keeping rest of digit
        }

        if(carry)
        {
            arr[k++] = carry;
        }

        for(i=0;i<k;i++){
            if(i==0 && arr[i]==0){
                continue;
            }else{
                cout<<arr[i];
            }
        }

        cout<<endl;

    }

    return 0;

}
