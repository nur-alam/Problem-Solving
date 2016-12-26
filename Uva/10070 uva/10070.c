#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp = freopen("input.txt","r",stdin);
    char str[100001];
    int m4, m100, m400, m15, m55;
    int i, count = 0;

    while(scanf("%s",&str)==1)
    {
        m4=0;
        m100=0;
        m400=0;
        m15=0;
        m55=0;
        if(count > 0){
            printf("\n");
        }
        count++;
        for(i=0;i<strlen(str);i++)
        {
            m4 = ( m4*10+str[i]-'0' ) % 4;
            m55 = ( m55*10+str[i]-'0' ) % 55;
            m15 = ( m15*10+str[i]-'0' ) % 15;
            m100 = ( m100*10+str[i]-'0' ) % 100;
            m400 = ( m400*10+str[i]-'0' ) % 400;
        }
        if(!m4 && m100 || !m400)
        {
            printf("This is leap year.\n");
            if(!m15)
            {
              printf("This is huluculu festival year.\n");
            }
            if(!m55)
            {
                printf("This is bulukulu festival year.\n");
            }
        }
        else
        {
            if(!m15)
            {
                printf("This is hulukulu festival year.\n");
            }
            else
            {
                printf("This is an ordinary year.\n");
            }
        }
    }

    return 0;

}
