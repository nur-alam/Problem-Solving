#include<stdio.h>
#include<stdbool.h>

//digit reversing function
int reverseDigits(int num)
{
    //handling negative numbers
    bool negativeFlag = false;
    if (num < 0)
    {
        negativeFlag = true;
        num = -num ;
    }
    int prev_rev_num = 0 , rev_num = 0;
    while(num != 0)
    {
        int curr_digit = num%10;
        rev_num = ( rev_num * 10 ) + curr_digit;
        //chechking if the reverse overflowed or not
        if((rev_num-curr_digit)/10 != prev_rev_num )
        {
            printf("WARNING OVERFLOWED!!!\n");
            return 0;
        }
        prev_rev_num = rev_num;
        num = num/10;
    }
    return negativeFlag ? -rev_num : rev_num;
}

int main(){
    int num = -5896;
    printf("%d",reverseDigits(num));
    return 0;
}
