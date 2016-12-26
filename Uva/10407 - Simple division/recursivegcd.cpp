#include<iostream>
#include<cstdio>

using namespace std;
int gcd(int a, int b);
int main(){

    int a,b;
    while(scanf("%d%d",&a,&b)==2){
        cout<< gcd(a,b) << endl;
    }
    int n,y;

    return 0;

}
int gcd(int a,int b){
    /*if(!b)
        return a;
    else
        gcd(b,a%b);*/
    return !b ? a:gcd(b,a%b);
    /*while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }*/
    //return a;
}
