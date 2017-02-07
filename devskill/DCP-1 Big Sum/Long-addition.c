#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101];
    char str2[101];
    int i,j,k,sum,carry,l,a,b,c,d;
    while(scanf("%s %s",str1,str2)!=EOF)
    {
        a=strlen(str1);
        b=strlen(str2);
    long int str3[110]={0};
        k=0;
        carry=0;
        sum=0;
        for(i=a-1,j=b-1;;i--,j--)
        {
            c=str1[i]-'0';
            d=str2[j]-'0';
            if(j<0)
            {
                d=0;
            }
            if(i<0)
            {
                c=0;
            }
            if(i<0&&j<0)
            {
                break;
            }
            sum=c+d+carry;
            str3[k]=sum%10;
            carry=sum/10;
            k++;
        }
    printf("sum = ");
    for(l=k-1;l>=0;l--)
    {
        printf("%ld",str3[l]);
    }
    printf("\n");
    }
    return 0;
}
