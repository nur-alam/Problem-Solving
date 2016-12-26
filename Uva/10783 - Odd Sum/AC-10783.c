#include<stdio.h>

int main()
{
    freopen("in.txt","r",stdin);
    int a,b,i,t,testcases=0;
    scanf("%d",&t);

    while(t--)
    {

        int oddsum = 0;
        scanf("%d%d",&a,&b);
        for(i=a; i<=b; i++)
        {
            if(i%2!=0)
            {
                oddsum+=i;
            }
            else
            {
                continue;
            }
        }
        printf("Case %d: %d\n",++testcases,oddsum);
    }

    return 0;
}
