#include<bits/stdc++.h> 
using namespace std;  

string multiply(string s1, string s2)  
{   
    int sign = 1;
    if(s1.at(0)=='-'){
        sign *= -1;
        s1 = s1.substr(1);//s1.erase(s1.begin())
    };
    if(s2.at(0)=='-'){
        sign *= -1;
        s2 = s2.substr(1);
    };  

    int s1len = s1.size(),s2len=s2.size(),i,j;
    if(s1len<s2len) swap(s1,s2);
    
    vector<int> result(s1len + s2len, 0);
    s1len = s1.size(),s2len=s2.size();
    int i_s2=0, j_s1;

    for(i=s2len-1;i>=0;i--){
      int n2 = s2[i]-'0';
      j_s1=0;int carry=0;

      for(j=s1len-1;j>=0;j--){
        int n1 = s1[j]-'0';
        int sum = n2*n1 + result[i_s2+j_s1] + carry;
        result[i_s2+j_s1] = sum%10; carry = sum/10;
        j_s1++;
      }
      if(carry) result[i_s2+j_s1] += carry;
      i_s2++;
    }

    i = result.size() -1;
    while(i>=0 && result[i]==0) {result.pop_back();i--;}
    if(result.empty()) return "0";

    string s = "";
    for(i=result.size()-1; i>=0; i--){
      s += to_string(result[i]);
    }

    if(sign == -1) s.insert(s.begin(),'-');

    return s;

}   

int main()  
{      
    int t;cin>>t;
    string s1, s2;
    while(t--){
      cin>>s1>>s2;
      cout << multiply(s1,s2) << endl;
    }
    return 0;    
} 