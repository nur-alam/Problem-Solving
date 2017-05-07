#include<stdio.h>

//digit reversing function
int reverseDigits(int num)
{
   int rev_num = 0;
   while(num>0)
   {
       rev_num = rev_num*10 + num%10;
       num = num/10;
   }
   return rev_num;
}

int main(){
    int num = -5896;
    printf("%d",reverseDigits(num));
    return 0;
}
