#include<stdio.h>

int main()
{
    int i,n,icase=0,givenParty,remainParty;
    int arr[98];
    freopen("in.txt","r",stdin);
    while(scanf("%d",&n))
    {
        givenParty = 0;
        remainParty = 0;
        if(n==0)
        {
            return 0;
        }

        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
             if(arr[i]==0)
                {
                    givenParty++;
                }
            else
                {
                    remainParty++;
                }
        }
        printf("Case %d: %d\n",++icase,remainParty-givenParty);
    }

    return 0;

}
