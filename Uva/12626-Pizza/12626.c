#include<stdio.h>
#include<string.h>

int main()
{
    freopen("IN.txt","r",stdin);
    int i,n,M,A,R,G,I,T;
    char str[600];
    scanf("%d",&n);
    while(n--)
    {
        M=A=R=G=I=T=0;
        scanf("%s",&str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='M')
                M++;
            else if(str[i]=='A')
                A++;
            else if(str[i]=='R')
                R++;
            else if(str[i]=='G')
                G++;
            else if(str[i]=='I')
                I++;
            else if(str[i]=='T')
                T++;
        }
        int possiblePizza = 0;
        for(i=1; i<=M; i++)
        {
            if(A>=3 && R>=2 && G>=1 && I>=1 && T>=1)
            {
                possiblePizza++;
                A-=3;R-=2;G-=1;I-=1;T-=1;
            }
        }
        printf("%d\n",possiblePizza);
    }

    return 0;

}
