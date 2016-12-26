#include<bits/stdc++.h>
#include<iostream>
#include<string>


using namespace std;

int main(){

    int n;int ara[]={0,1,0};
    cin >> n;
    int t = n % 10;
    int restdigint = n / 10;
    cout << t << "\n" << restdigint << endl;
    ara[1]++;
    ara[1]++;
    cout << ara[1] << endl;

    return 0;
}
