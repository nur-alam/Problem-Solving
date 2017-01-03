#include<bits/stdc++.h>

using namespace std;

#define max 20//000000

bool ara[max];

//getting prime numbers
void sieve(){

    int i,j;

    memset(ara,true,sizeof(ara));

    for(i=2;i<sqrt(max);i++){
        if(ara[i]==true){
            for(j=2;i*j<=max;j++){
                ara[i*j] = false;
            }
        }
    }

}
int main()
{
    sieve();
    int i, j, count = 0;
    for(i=2,j=2;i<=max;i++,j++){
        if(ara[i]==true){
            cout << j << " ";
            ++count;
        }
    }
    cout << endl << count << endl;
    return 0;
}

