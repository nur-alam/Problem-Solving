#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,i=0,j,num,rem,bin[1000],parity;

    while( scanf("%d",&n)==1 ){

        parity = 0; i = 0, j = 0; num = n;

        if(n==0){
            break;
        }

        while(num>0){

            rem = num % 2;

            bin[i] = rem;

            if(rem == 1)
                ++parity;

            num /= 2;

            i++;

        }

        printf("The parity of ");

        for(i = i -1;i>=0;i--){

            printf("%d",bin[i]);

        }

        printf(" is %d (mod 2).\n",parity);

    }

    return 0;

}
