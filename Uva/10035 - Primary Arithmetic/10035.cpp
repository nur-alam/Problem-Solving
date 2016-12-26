#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int a,b,digit,sum,num;

    while( scanf("%lld%lld",&a,&b)==2 ){

        if(a==0 && b==0)
            break;

        if(a>b)
            num = a;

        else
            num = b;

        digit = 0;

        while(num!=0){

            num = num / 10;
            digit++;

        }

        int carry = 0, c=0;

        while(digit--){

           int x = a % 10;

           int y = b % 10;

           sum = x + y + carry;

           if(sum>9){

                c++;
                carry = sum / 10;

           }
           else
                carry = 0;

           a = a/10; b = b/10;

        }

        if(!c)
            printf("No carry operation.\n");

        else if(c==1)
            printf("1 carry operation.\n");

        else
            printf("%d carry operations.\n",c);

    }

    return 0;

}
