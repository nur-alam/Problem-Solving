#include<stdio.h>
#include<string.h>
int main()
{
    int k;
    char  str[10000];
    scanf("%d",&k);

    getchar();  // you have to use it for taking a single char input which is enter

    while(k--){
            gets(str);
            int len = strlen(str);
            int last_digit = str [len-1];
            if(last_digit%2==0)
            {
                printf("even\n");
            }
            else
                printf("odd\n");
    }
    return 0;
}
