#include<stdio.h>
int main()
{
    long long int k,last_digit_out,tens_digit;
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        k=(((((n*567)/9)+7492)*235)/47)-498;
        last_digit_out=k/10;
        tens_digit=last_digit_out%10;
        printf("%d\n",abs(tens_digit));
    }


    return 0;
}
