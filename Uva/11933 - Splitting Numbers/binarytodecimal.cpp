#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){

    int n,bin[1005];

    while(scanf("%d",&n)==1){

        if(n==0)
            break;

        int i = 0,j,k,l,m,rem,a[1005],b[1005];

        while(n>0){

            rem = n % 2;
            bin[i++] = rem;
            n = n / 2;

        }

        // a and b making from n(given value)

        bool isFirstone = false;

        for(k = 0; k<i; k++){

            if(bin[k]==1 && !isFirstone){

                a[k] = bin[k];
                b[k] = 0;
                isFirstone = true;

            }
            else if(bin[k]==1 && isFirstone){

                b[k] = bin[k];
                a[k] = 0;
                isFirstone = false;

            }

            else{

                a[k] = bin[k];
                b[k] = bin[k];

            }

        }

        //converting binary a to decimal a

        int o=0, p=0, aD=0, aDesi=0, bD=0, bDesi=0;

        for(o = i-1; o>=0; o--){
            if(o==(i-1) && !a[o]){
                continue;
            }
            aD = a[o]*pow(2,o);
            aDesi = aDesi + aD;
        }

        //converting binary b to decimal b

        for(p = i-1; p>=0; p--){
            if(p==(i-1) && !b[p]){
                continue;
            }
            bD = b[p]*pow(2,p);
            bDesi = bDesi + bD;
        }

        printf("%d %d\n",aDesi,bDesi);

    }

    return 0;

}

