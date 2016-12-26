#include<stdio.h>

int main()
{

    char str1[100001],str2[100001],result[100];
    gets(str1);
    gets(str2);int carry = 0;
    int i = strlen(str1)-1;
    for(;i>=0;i--){
        int r1 = str1[i]-'0';
        int r2 = str2[i]-'0'+carry;
        int r = r1 + r2;
        if(r>9){

            if(i==0){
                result[i] = r;
            }
            else{
                r = r % 10;
                result[i] = r;
            }
            carry = 1;
        }
        else{
            result[i] = r1+r2;
            carry = 0;
        }
    }
    for(i=0;i<strlen(str1);i++){
        printf("%d",result[i]);
    }
    return 0;

}
