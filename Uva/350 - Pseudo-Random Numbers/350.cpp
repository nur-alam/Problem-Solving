#include<bits/stdc++.h>

using namespace std;


int main(){

    long int z,i,m,l,k,j,kase = 0;
    long int nrN;  //next random number
    long int nrn[10005] = {0}; //next random number keeping array
    bool p;
    while(scanf("%ld%ld%ld%ld",&z,&i,&m,&l)==4){

        k = 0;
        p = true;

        if(z==0 && i==0 && m==0 && l==0)
            break;

        while(true){

            nrN = ((z*l)+i)%m;

            for(j=0;j<k;j++){
                if(nrN==nrn[j]){
                    p = false;
                }
            }

            if(!p){
                break;
            }

            nrn[k++] = nrN;
            l = nrN;

        }

        printf("Case %ld: %ld\n",++kase,k);

    }

    return 0;

}
