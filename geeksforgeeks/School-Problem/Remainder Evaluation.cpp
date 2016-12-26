#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, i, t, num1, num2, remainder;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&num1,&num2);
        remainder = num1%num2;
        cout<<remainder<<endl;
    }

    return 0;
}
