#include<bits/stdc++.h>

using namespace std;

int missing_number(int n){
  int num, i, sum;
  sum = (n*(n+1))/2;
  for(i=0; i<n-1; i++){
    cin >> num; sum -= num;
  }
  return sum;
}

int main(){
  int t, n, missing_num;
  cin>>t;
  while(t--){
    cin >> n;
    missing_num = missing_number(n);
    cout << missing_num << endl;
  }
  return 0;

}
