#include<bits/stdc++.h>

using namespace std;
//Returns true if s1 is smaller than s2
string isSmaller(string s1,string s2){
    int s1len = s1.length(), s2len = s2.length();
    if(s1len < s2len) return "true";
    if(s2len > s1len) return "false";
    for(int i = 0; i < s1len; i++){
        if(s1[i] < s2[i]) return "true";
        else if (s1[i]>s2[i]) return "false";
    }
    return "equal";
}

string removezerofromfirst(string s){
    reverse(s.begin(),s.end());
    for(int i = s.size()-1; i>=0; i--)
    {
        if(s[i]=='0'){
            s.pop_back();
        }else{
            break;
        }
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(){

    string s1 = "0088";
    string s2 = "1079";
    int t;
    cin>>t;
    while(t--){
        cin >> s1 >> s2;
        s1 = removezerofromfirst(s1);
        s2 = removezerofromfirst(s2);
        //cout << isSmaller(s1,s2) << endl;
        if(isSmaller(s1,s2) == "true") cout << "1" << endl;
        else if (isSmaller(s1,s2) == "false") cout << "2" << endl;
        else cout << "3" << endl;
    }

    return 0;

}
