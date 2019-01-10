#include<stdio.h>
#include<string.h>

int main()
{
    char str_one[100];
    char str_two[100];

    //scanf faster than gets..if we need gets then use it otherwise should not use.
    scanf("%s%s",str_one,str_two);

    strlwr(str_one);
    strlwr(str_two);

    if(strcmp(str_one,str_two)==0)
        printf("0\n");
    else if(strcmp(str_one,str_two)==1)
        printf("1\n");
    else
        printf("-1\n");

    return 0;
}
