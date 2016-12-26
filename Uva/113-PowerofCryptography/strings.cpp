#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main ()
{
    /*double n , p;
    while(cin>>n>>p){
        double k = pow(p,1/n);
        cout << k << endl;
    }*/
    double n,p;
    while(scanf("%lf %lf",&n,&p)==2){
        double k = pow(p,1/n);
        printf("%0.0lf\n",k);
    }
   return 0;

}

