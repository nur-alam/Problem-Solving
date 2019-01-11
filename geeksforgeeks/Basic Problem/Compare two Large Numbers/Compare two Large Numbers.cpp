#include<bits/stdc++.h>

using namespace std;

int main() {

  string s1,s2;
  int t;cin>>t;

  while(t--){

    cin >> s1 >> s2;
    int s1len = s1.length(), s2len = s2.length();

    if(s1len>s2len){
        int diff = s1len - s2len;
        while(diff--){
          s2 = '0'+s2;
        }
    }else if(s2len>s1len){
      int diff = s2len - s1len;
      while(diff--){
        s1 = '0'+s1;
      }
    }

    //cout << s1 << " " << s2 << endl;
    if( s1.compare(s2) > 0 ){
        cout << "2" << endl;
    }else if ( s1.compare(s2) < 0 ){
        cout << "1" << endl;
    }else{
        cout << "3" << endl;
    }


  }

	return 0;

}
