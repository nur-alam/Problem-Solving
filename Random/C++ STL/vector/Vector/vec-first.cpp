#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector <int> v1(5,0);
    for(int i = 0; i < v1.size(); i++){
        cin >> n;
        v1[i] = n;
    }
    //v1.push_back(10);
    sort(v1.begin(),v1.end());
    vector <int>::iterator it;
    for(it=v1.begin(); it<v1.end(); it++){
        cout << *it << " ";
    }
    //cout << endl << v1.front() << endl;


    return 0;

}
