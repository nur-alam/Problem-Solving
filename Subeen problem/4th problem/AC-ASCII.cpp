#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main(){
char ar[3];
int n,i;
cin>>n;
while(n--){
    int sum=0;
    for(i=0;i<3;i++){

        scanf(" %c",&ar[i]);
        sum=sum+ar[i];
    }
    cout<<sum<<endl;
}

return 0;
}

