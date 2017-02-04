#include<bits/stdc++.h>

using namespace std;

// define long long int
#define ll long long int

// checking string is palindrome or not
ll isPalindrome(string s){
    ll start = 0, end = s.size()-1;
    while(start<end){
        if(s[start]!=s[end]) return 0;
        else{
            start++;end--;
        }
    }
    return 1;
}

int main(){
    string s;
    int i,t;
    cin>>t;
    while(t--){
        cin>>s;
        for(i=0;i<s.size();i++){
            s[i] = isupper(s[i]) ? tolower(s[i]):s[i];
        }
        if(!isPalindrome(s)) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}
