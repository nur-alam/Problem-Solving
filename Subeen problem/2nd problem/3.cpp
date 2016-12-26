#include<iostream>
using namespace std;
int main()
{
    int i,n,a=0,b=0;
    int num;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num;
        if(num>0)
        {
            a++;
        }
        else if(num<0){
            b++;
        }
    }
    cout<<a<<b<<endl;
    return 0;
}

