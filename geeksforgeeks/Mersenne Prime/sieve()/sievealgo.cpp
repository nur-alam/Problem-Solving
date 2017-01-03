#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int n, i, j;
    scanf("%lld",&n);

    long long int primes[n];

    for(i=0;i<=n;i++)
        primes[i] = 1;

    primes[0] = 0;
    primes[1] = 0;

    /*for(i=0;i<=n;i++){
        printf("%ld ",primes[i]);
    }*/

   // printf("\n\n\t---\n\n");

    for(i=2;i<=sqrt(n);i++){
        if(primes[i]==1){
            for(j=2;i*j<=n;j++){
                primes[i*j] = 0;
            }
        }
    }

    /*for(i=0;i<=n;i++){
        printf("%ld ",primes[i]);
    }
    printf("\n\n\t-----\n\n");*/

    // primes printing
    long long int count = 0;
    for(i=0,j=0;i<=n;i++,j++){
        if(primes[i]==1){
            printf("%lld ",j);
            count++;
        }
    }

    printf("\n\n\tprime number found %ld\n\n",count);

    return 0;

}
