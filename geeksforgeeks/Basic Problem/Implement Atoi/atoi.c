#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int atoi(char *str)
{
    int i=0,temp=0,num=0;
    bool negativeFlag=false;
    while(str[i] != '\0')
    {
        temp = str[i] - '0';
        if(temp>=0 && temp<=9)
        {
            num = num*10 + temp;
        }else if(str[i] == '-'){
            negativeFlag = true;
        }else{
            num = -1;
            break;
        }
        i++;
    }
    return negativeFlag ? -num : num;
}

int main()
{
    int i , t;
    char str[100];
    scanf("%d",&t);
    while(t--){
        scanf("%s",str);
        printf("%d\n",atoi(str));
    }
    return 0;
}
