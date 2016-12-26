#include<stdio.h>

int main()
{
    double r,a,b,length,i;
    int icase=0,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&r);
        length = 5*r;
        double coordinate_x = 0.45*length;
        double coordinate_y = 0.55*length;
        printf("Case %d:\n",++icase);
        for(i=1; i<=4; i++)
        {
            if(i==1)
                printf("%0.0lf %.0lf\n",-coordinate_x,(1.5*r));
            else if(i==2)
                printf("%0.0lf %0.0lf\n",coordinate_y,(1.5*r));
            else if(i==3)
                printf("%0.0lf %0.0lf\n",coordinate_y,(-1.5*r));
            else
                printf("%0.0lf %0.0lf\n",-coordinate_x,(-1.5*r));
        }
    }
    return 0;
}
