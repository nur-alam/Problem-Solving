#include<stdio.h>
#include<stdbool.h>

int reverseDigits(int num)
{
    bool negativeFlag = false;
    if(num<0)
    {
        negativeFlag = true;
        num = -num;
    }
    static int rev_num = 0;
    if(num>0)
    {
        rev_num = (rev_num*10)+ num%10;
        reverseDigits(num/10);
    }
    return negativeFlag ? -rev_num : rev_num;
}

int main()
{
    int num = -29813;
    //reverseDigits(num);
    printf("%d",reverseDigits(num));
    return 0;
}
