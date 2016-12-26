#include<bits/stdc++.h>

using namespace std;


long long int reversenum(long long int num){
    long long int rev = 0;
    while(num){
        rev = rev*10+(num%10);
        num = num/10;
    }
    return rev;
}

bool isPallindrome(long long int num){

    int i = 0, j = 0, k = 0;
    char numstr[16];
    while(num){
        numstr[i++] = num%10;
        num = num / 10;
    }
    for(j=0,k=i-1; j<i-1; j++,k--){
        if(numstr[j]!=numstr[k]){
            return false;
        }
    }
    return true;

}

int main(){

    long long int num;
    unsigned iteration,tCase;

    scanf("%u",&tCase);

    while(tCase--){

        scanf("%lld",&num);
        iteration = 0;

        while(true){

            num = num + reversenum(num);
            iteration++;

            //printf("%lld\n",reversenum(num));

            if(isPallindrome(num)){
                printf("%u %lld\n",iteration,num);
                break;
            }

        }

    }

    return 0;

}
