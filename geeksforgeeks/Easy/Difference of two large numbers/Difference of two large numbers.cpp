#include<bits/stdc++.h>

using namespace std;
//Returns true if s1 is smaller than s2
bool isSmaller(string s1,string s2){
    int s1len = s1.length(), s2len = s2.length();
    if(s1len < s2len) return true;
    if(s2len > s1len) return false;
    for(int i = 0; i < s1len; i++){
        if(s1[i] < s2[i]) return true;
        else if (s1[i]>s2[i]) return false;
    }
    return false;
}

string large_diff(string s1, string s2){
    // before proceeding further, make sure s1 is not smaller
    if(isSmaller(s1,s2))
        swap(s1,s2);
    string s = "";
    int s1len = s1.length(),s2len = s2.length();
    int diff = s1len - s2len;
    int carry = 0;
    for(int i = s2len - 1; i >= 0; i--){
        int sub = ( (s1[i+diff]-'0') - (s2[i]-'0') - carry);
        if(sub < 0){
            sub = sub + 10;
            carry = 1;
        }
        else carry = 0;
        s.push_back(sub+'0');
    }
    // subtract remaining digits of s1
    for(int i = s1len - s2len - 1; i>=0; i--){
        if (s1[i]=='0' && carry)
        {
            s.push_back('9');
            continue;
        }
        int sub = ( (s1[i]-'0') - carry);
        if( i>0 || sub>0 )
            s.push_back(sub+'0');
        carry = 0;
    }
    // reverse resultant string
    reverse(s.begin(), s.end());
    return s;
}

int main(){

    string s1;// = "88";
    string s2;// = "1079";
    cin >> s1 >> s2;
    cout << large_diff(s1,s2) << endl;

    return 0;

}
