#include<stdio.h>//http://shipuahamed.com/2013/01/uva-10494-if-we-were-a-child-again.html#
#include<string.h>

int main(){
   // freopen("in.txt","r",stdin);
    char s[100000],ch;
    long long int i,j,k,l,m,n,f;
    while(scanf("%s %c %lld",&s,&ch,&n)==3)
    {

        if(ch == '/')
        {
            f = 1;
            long long int rem = 0;
            for(i=0;i<strlen(s);i++)
            {
                rem = s[i]-'0'+rem*10;
                if(rem/n!=0)
                {
                    f = 0;
                }
                if(!f)
                    printf("%lld",rem/n);
                rem = rem%n;
            }
            if(f)
            printf("0");
        }
        else if(ch == '%')
        {
            long long int rem = 0;
            for(i=0;i<strlen(s);i++)
            {
                rem = s[i]-'0'+rem*10;
                rem = rem%n;

            }
            printf("%lld\n",rem);
        }
    }
    return 0;
}
