#include<bits/stdc++.h>

using namespace std;

#define max 20000000

bool ara[max];
int twprime[1270608][2];

//getting prime numbers
void sieve()
{
    int i, j, count = 0;
    for(i=2;i<max;i++){
        ara[i] = true;
    }
    for(i=2;i<=sqrt(max);i++){
        if(ara[i]==true){
            for(j=2;i*j<=max;j++){
                ara[i*j]=0;
            }
        }
    }
}

//keeping twin primes in 2d array
void twinprime(){
    int i, k = 0;
    for(i=2;i<=max;i++){
        if(ara[i]==true){
            if(ara[i+2]==true){
                twprime[++k][0] = i;
                twprime[k][1] = i+2;
            }
        }
    }
}

int main()
{
    sieve();
    twinprime();
    int g;
    while(cin>>g){
        cout << "(" << twprime[g][0] << ", " << twprime[g][1] << ")" << endl;
    }

    return 0;
}
