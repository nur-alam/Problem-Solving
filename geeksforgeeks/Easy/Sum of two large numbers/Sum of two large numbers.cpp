#include<bits/stdc++.h>
#include<string>

using namespace std;

string bigsum(string s1, string s2){

    if(s1.length() > s2.length())
        swap(s1,s2);

    string s = "";
    int i, sum, s1len = s1.length(), s2len = s2.length();
    int diff = s2len - s1len;
    int carry = 0;

    for(i = s1len - 1; i >= 0; i--){
        sum = ((s1[i]-'0')+(s2[i+diff]-'0')+carry);
        s.push_back(sum%10+'0');
        carry = sum / 10;
    }

    for(i = s2len - s1len - 1; i>= 0; i--){
        sum = ((s2[i]-'0')+carry);
        s.push_back(sum%10 + '0');
        sum = sum / 10;
    }

    if(carry)
        s.push_back(carry+'0');

    reverse(s.begin(),s.end());

    return s;

}

int main(){

    int t;
    string s1,s2;

    cin >> t;

    while(t--){
        cin >> s1 >> s2;
        cout << bigsum(s1,s2) << endl;
    }

    return 0;

}
