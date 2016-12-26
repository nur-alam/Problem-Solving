#include<bits/stdc++.h>

using namespace std;

long long int reverse(long long int num){

    long long int rev = 0;
    while(num){
        rev = rev*10+(num%10);
        num = num / 10;
    }
    return rev;

}

bool isPallindrome(long long int num){

   int i = 0, j = 0, k = 0;
   char resultString[16];
   while(num){
        resultString[k++] = num % 10;
        num /= 10;
   }
   for(i=0 , j=k-1; i<k; i++, j-- ){
        if(resultString[i] != resultString[j]){
            return false;
        }
   }
   return true;

}

int main(){

    long long int tCase,num;

    scanf("%lld",&tCase);

    while(tCase--){

        scanf("%lld",&num);
        int iteration = 0;

        while(true){
            num += reverse(num);
            printf("%lld\n",num);
            iteration++;

            if(isPallindrome(num)){
                printf("%d %lld\n",iteration,num);
                break;
            }

        }

    }

    return 0;

}
