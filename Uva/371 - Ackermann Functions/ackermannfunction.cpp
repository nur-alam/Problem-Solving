#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int i, j, n, k, t, count , max;

    while(scanf("%lld%lld",&n,&k)==2){

        max = 0;

        if(n==0 && k==0)
            break;

        if(n<k)
            swap(n,k);

        for(i=k; i<=n; i++){

            j = i;
            count = 0;

            while(true){

                if(j%2==0){
                    j = j / 2;
                }

                else{
                    j = 3*j+1;
                }

                count++;

                if(j==1)
                    break;

            }

            if(max<count){
                max = count;
                t = i;
            }

        }

        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",k,n,t,max);

    }

    return 0;

}
