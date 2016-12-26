#include<iostream>
#include<cstdio>

using namespace std;

int main(){

    long long int lines,i;
    while(cin>>lines){
        long long int sum = 0;
        if(lines<0)
            break;
        for(i=1; i<=lines; i++){
            sum = sum + i;
        }
        cout << sum + 1 << endl;
    }

    return 0;

}
