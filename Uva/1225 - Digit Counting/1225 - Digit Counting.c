#include<stdio.h>
int main()
{

    int i,j,t,k,n,m;
    scanf("%d",&t);
    while(t--)
    {
        int a=0;
        int b=0;
        int c=0;
        int d=0;
        int e=0;
        int f=0;
        int g=0;
        int h=0;
        int p=0;
        int q=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            k = i;
            for(j=0;;j++)
            {
                m = k % 10;
                if(m==0) a++;
                else if(m==1) b++;
                else if(m==2) c++;
                else if(m==3) d++;
                else if(m==4) e++;
                else if(m==5) f++;
                else if(m==6) g++;
                else if(m==7) h++;
                else if(m==8) p++;
                else if(m==9) q++;
                k=k/10;
                if(k==0){
                    break;
                }

            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,p,q);
    }
    return 0;
}
