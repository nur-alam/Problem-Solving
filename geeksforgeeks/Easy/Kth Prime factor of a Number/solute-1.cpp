#include<stdio.h>

int prime(int n)
{
    int i,count=-1;
    if(n==2)
        return 1;
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                count=1;
                break;
            }
        }
        if(count==1)
            return 0;
        else
            return 1;
    }

}

int main()
{
	int t;
	scanf("%d",&t);

	while(t-->0)
    {
        unsigned long n;
        int k,i,count=0;
        scanf("%lu%d",&n,&k);

        for(i=2; i<=n; i++)
        {   printf("%d ",i);
            if(n%i==0 && prime(i))
            {
                n/=i;

                if(++count==k)
                {
                     printf("%dbr ",i);
                    break;
                }
                i--;
            }
            printf("%dn=%d   ",i,n);
        }
        printf("\n\n");
        if(count==k)
            printf("%d\n",i);
        else
            printf("-1\n");

    }

	return 0;

}
