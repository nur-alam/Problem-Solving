#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){
    int arr[5] = {1,5,2,3,4};
    string s = "acbd";
    sort(s,s+strlen(s));
    for(int i=0;i<s.size();i++)
        cout << s[i] << " ";
    return 0;
}
