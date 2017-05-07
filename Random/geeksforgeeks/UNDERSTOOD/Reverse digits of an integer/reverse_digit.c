#include<stdio.h>
#include<stdbool.h>

//digit reversing function
int reverseDigits(int num)
{
    //handling negative number
   bool negativeFlag = false;
   if(num<0)
   {
       negativeFlag = true;
       num = -num;
   }
   int rev_num = 0;
   while(num>0)
   {
       rev_num = rev_num*10 + num%10;
       num = num/10;
   }
   return negativeFlag ? -rev_num : rev_num;
}

int main(){
    int num = -5896;
    printf("%d",reverseDigits(num));
    return 0;
}
